#include "Pulidora.h"

Pulidora::Pulidora(const std::string& nombre) : Maquina(nombre) {}

int Pulidora::tiempoCicloSeg() const {
    return 30;
}