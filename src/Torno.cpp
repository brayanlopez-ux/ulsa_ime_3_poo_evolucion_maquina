#include "Torno.h"

#include <iostream>

Torno::Torno(const std::string& nombre) : Maquina(nombre) {}

void Torno::procesar() {
    std::cout << nombre << ": torneando pieza\n";
    piezasProcesadas++;
    tiempoTrabajadoSeg += 45;
}