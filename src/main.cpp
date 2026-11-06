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
        planta::Torno torno("Torno T-01");
        planta::Fresadora fresadora("Fresadora F-01");
        planta::Pulidora pulidora("Pulidora P-01");
        planta::InspeccionVisual inspeccion("Inspeccion I-01");
        planta::BandaTransportadora banda("Banda B-01");

        planta::ControlDeLinea linea;
        linea.agregar(&torno);
        linea.agregar(&fresadora);
        linea.agregar(&pulidora);
        linea.agregar(&inspeccion);
        linea.agregar(&banda);

        linea.ejecutarTurno(2);
        linea.imprimirReporte();
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
        return 1;
    }

    return 0;
}