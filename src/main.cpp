#include "ControlDeLinea.h"
#include "Fresadora.h"
#include "Pulidora.h"
#include "Torno.h"

int main() {
    Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");
    Pulidora pulidora("Pulidora P-01");

    ControlDeLinea linea;
    linea.agregar(&torno);
    linea.agregar(&fresadora);
    linea.agregar(&pulidora);

    linea.ejecutarTurno(2);
    linea.imprimirReporte();

    return 0;
}