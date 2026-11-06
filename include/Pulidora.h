#ifndef PULIDORA_H
#define PULIDORA_H

#include "Maquina.h"

class Pulidora : public Maquina {
public:
    explicit Pulidora(const std::string& nombre);

    void procesar() override;
    int tiempoCicloSeg() const override;
};

#endif