#include "BandaTransportadora.h"

#include <iostream>

BandaTransportadora::BandaTransportadora() : Motor(1800.0) {}

void BandaTransportadora::moverPieza() {
    fijarVelocidad(900.0);
    std::cout << "Banda: moviendo pieza a " << getVelocidad() << " rpm\n";
}