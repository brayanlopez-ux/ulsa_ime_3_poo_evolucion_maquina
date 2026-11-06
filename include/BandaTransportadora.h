#ifndef BANDATRANSPORTADORA_H
#define BANDATRANSPORTADORA_H

#include "Motor.h"

class BandaTransportadora : public Motor {
public:
    BandaTransportadora();

    void moverPieza();
};

#endif