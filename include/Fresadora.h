#ifndef FRESADORA_H
#define FRESADORA_H

#include "Maquina.h"

class Fresadora : public Maquina {
public:
    explicit Fresadora(const std::string& nombre);

    void procesar() override;
        int tiempoCicloSeg() const override;
};

#endif