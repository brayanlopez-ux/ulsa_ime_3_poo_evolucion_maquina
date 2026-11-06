#ifndef PULIDORA_H
#define PULIDORA_H

#include "Maquina.h"

class Pulidora : public Maquina {
private:
    void ejecutarCiclo() override;

public:
    explicit Pulidora(const std::string& nombre);

    int tiempoCicloSeg() const override;
};

#endif