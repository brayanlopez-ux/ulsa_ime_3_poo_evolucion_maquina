#include "Cortadora.h"

#include <iostream>

namespace planta {

Cortadora::Cortadora(const std::string& nombre) : Maquina(nombre) {}

void Cortadora::ejecutarCiclo() {
    std::cout << getNombre() << ": cortando lamina\n";
}

int Cortadora::tiempoCicloSeg() const {
    return 50;
}

}  // namespace planta