#include "BandaTransportadora.h"
#include "ControlDeLinea.h"
#include "Fresadora.h"
#include "InspeccionVisual.h"
#include "Pulidora.h"
#include "Torno.h"

#include <exception>
#include <iostream>

int main() {
    try {
        Torno torno("Torno T-01");
        Fresadora fresadora("Fresadora F-01");
        Pulidora pulidora("Pulidora P-01");
        InspeccionVisual inspeccion("Inspeccion I-01");
        BandaTransportadora banda;

        ControlDeLinea linea;
        linea.agregar(&torno);
        linea.agregar(&fresadora);
        linea.agregar(&pulidora);
        linea.agregar(&inspeccion);
        linea.agregar(&banda);
        banda.fijarVelocidad(5000.0);

        linea.ejecutarTurno(2);
        linea.imprimirReporte();
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}