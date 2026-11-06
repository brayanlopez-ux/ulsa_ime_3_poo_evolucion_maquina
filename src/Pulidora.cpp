#include "Pulidora.h"

#include <iostream>

Pulidora::Pulidora(const std::string& nombre) : Maquina(nombre) {}

void Pulidora::ejecutarCiclo() {
    std::cout << getNombre() << ": puliendo pieza\n";
}

int Pulidora::tiempoCicloSeg() const {
    return 30;
}