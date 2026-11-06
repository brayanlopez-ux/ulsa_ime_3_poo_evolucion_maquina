#ifndef FRESADORA_H
#define FRESADORA_H

#include "Maquina.h"

class Fresadora : public Maquina {
public:
    Fresadora(const std::string& nombre);

    void procesar();
};

#endif