#ifndef PULIDORA_H
#define PULIDORA_H

#include "Maquina.h"

namespace planta {

class Pulidora : public Maquina {
private:
    void ejecutarCiclo() override;

public:
    explicit Pulidora(const std::string& nombre);

    int tiempoCicloSeg() const override;
};

}  // namespace planta

#endif