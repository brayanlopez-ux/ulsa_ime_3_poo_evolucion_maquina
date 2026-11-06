#include "Fresadora.h"
#include "Maquina.h"
#include "Torno.h"

#include <iostream>

// Ejecuta varios ciclos de cualquier maquina de la planta.
void ejecutarTurno(Maquina& m, int ciclos) {
    for (int i = 0; i < ciclos; i++) {
        m.procesar();
    }
}

int main() {
    Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");

    std::cout << "--- Llamada directa ---\n";
    torno.procesar();
    fresadora.procesar();

    std::cout << "--- Turno de 2 ciclos ---\n";
    ejecutarTurno(torno, 2);
    ejecutarTurno(fresadora, 2);

    std::cout << "--- Estado ---\n";
    torno.mostrarEstado();
    fresadora.mostrarEstado();

    return 0;
}