#include "InspeccionVisual.h"

#include <iostream>

namespace planta {

InspeccionVisual::InspeccionVisual(const std::string& nombre) : Maquina(nombre) {}

void InspeccionVisual::ejecutarCiclo() {
    std::cout << getNombre() << ": inspeccionando pieza con camara\n";
}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15;
}

}  // namespace planta