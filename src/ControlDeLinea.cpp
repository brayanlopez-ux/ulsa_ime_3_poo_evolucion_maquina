#include "ControlDeLinea.h"

#include <iostream>

void ControlDeLinea::agregar(const Maquina& maquina) {
    maquinas.push_back(maquina);
}

void ControlDeLinea::ejecutarTurno(int ciclos) {
    for (Maquina& m : maquinas) {
        for (int i = 0; i < ciclos; i++) {
            m.procesar();
        }
    }
}

void ControlDeLinea::imprimirReporte() const {
    std::cout << "--- Reporte de la linea ---\n";
    for (const Maquina& m : maquinas) {
        m.mostrarEstado();
    }
}