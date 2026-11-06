#include "Torno.h"

#include <iostream>

Torno::Torno(const std::string& nombre) : Maquina(nombre) {}

void Torno::procesar() {
    std::cout << getNombre() << ": torneando pieza\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Torno::tiempoCicloSeg() const {
    return 45;
}