#include "InspeccionVisual.h"

#include <iostream>

InspeccionVisual::InspeccionVisual(const std::string& nombre) : Maquina(nombre) {}

void InspeccionVisual::procesar() {
    std::cout << getNombre() << ": inspeccionando pieza con camara\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15;
}