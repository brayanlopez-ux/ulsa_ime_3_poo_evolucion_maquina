#include "Torno.h"

#include <iostream>

Torno::Torno(const std::string& nombre) : Maquina(nombre), husillo(3000.0) {}

void Torno::procesar() {
    husillo.fijarVelocidad(1200.0);
    std::cout << getNombre() << ": torneando pieza a "
              << husillo.getVelocidad() << " rpm\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Torno::tiempoCicloSeg() const {
    return 45;
}