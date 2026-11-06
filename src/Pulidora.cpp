#include "Pulidora.h"

#include <iostream>

Pulidora::Pulidora(const std::string& nombre) : Maquina(nombre) {}

void Pulidora::procesar() {
    std::cout << getNombre() << ": puliendo pieza\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Pulidora::tiempoCicloSeg() const {
    return 30;
}