#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>

class Maquina {
public:
    std::string nombre;
    int piezasProcesadas;
    int tiempoTrabajadoSeg;

    Maquina(const std::string& nombre);

    void procesar();
    void mostrarEstado() const;
};

#endif