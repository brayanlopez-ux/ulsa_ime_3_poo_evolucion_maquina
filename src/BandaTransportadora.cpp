#include "BandaTransportadora.h"

#include <iostream>

BandaTransportadora::BandaTransportadora(const std::string& nombre)
    : Maquina(nombre), motor(1800.0) {}

void BandaTransportadora::ejecutarCiclo() {
    motor.fijarVelocidad(900.0);
    std::cout << getNombre() << ": moviendo pieza a "
              << motor.getVelocidad() << " rpm\n";
}

int BandaTransportadora::tiempoCicloSeg() const {
    return 20;
}