#include "ControlDeLinea.h"

#include <iostream>

bool ControlDeLinea::agregar(Maquina* maquina) {
    if (maquina == nullptr) {
        return false;
    }
    maquinas.push_back(maquina);
    return true;
}

void ControlDeLinea::ejecutarTurno(int ciclos) {
    for (Maquina* m : maquinas) {
        for (int i = 0; i < ciclos; i++) {
            m->procesar();
        }
    }
}

void ControlDeLinea::imprimirReporte() const {
    if (maquinas.empty()) {
        std::cout << "La linea no tiene maquinas\n";
        return;
    }

    std::cout << "--- Reporte de la linea ---\n";
    int total = 0;
    for (const Maquina* m : maquinas) {
        m->mostrarEstado();
        total += m->getPiezasProcesadas();
    }
    std::cout << "Total de piezas: " << total << '\n';
}