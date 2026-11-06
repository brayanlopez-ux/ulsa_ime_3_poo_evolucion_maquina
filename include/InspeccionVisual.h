#ifndef INSPECCIONVISUAL_H
#define INSPECCIONVISUAL_H

#include "Maquina.h"

namespace planta {

class InspeccionVisual : public Maquina {
private:
    void ejecutarCiclo() override;

public:
    explicit InspeccionVisual(const std::string& nombre);

    int tiempoCicloSeg() const override;
};

}  // namespace planta

#endif