#ifndef TORNO_H
#define TORNO_H

#include "Maquina.h"

class Torno : public Maquina {
public:
    Torno(const std::string& nombre);

    void procesar();
};

#endif