#ifndef CONTROLDELINEA_H
#define CONTROLDELINEA_H

#include "Maquina.h"

#include <vector>

// Coordina las maquinas de la linea. Las maquinas existen fuera de la linea:
// la linea solo las conoce (agregacion) y nunca las destruye.
class ControlDeLinea {
private:
    std::vector<Maquina*> maquinas;

public:
    bool agregar(Maquina* maquina);
    void ejecutarTurno(int ciclos);
    void imprimirReporte() const;
};

#endif