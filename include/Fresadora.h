#ifndef FRESADORA_H
#define FRESADORA_H

#include "Maquina.h"

namespace planta {

class Fresadora : public Maquina {
private:
    void ejecutarCiclo() override;

public:
    explicit Fresadora(const std::string& nombre);

    int tiempoCicloSeg() const override;
};

}  // namespace planta

#endif