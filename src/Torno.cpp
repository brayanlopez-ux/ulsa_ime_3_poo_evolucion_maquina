#include "Torno.h"

#include <iostream>

Torno::Torno(const std::string& nombre) : Maquina(nombre), husillo(3000.0) {}

void Torno::procesar() {
    std::cout << getNombre() << ": atajo, ciclo rapido\n";
    ejecutarCiclo();
}

void Torno::ejecutarCiclo() {
    husillo.fijarVelocidad(1200.0);
    std::cout << getNombre() << ": torneando pieza a "
              << husillo.getVelocidad() << " rpm\n";
}

int Torno::tiempoCicloSeg() const {
    return 45;
}
