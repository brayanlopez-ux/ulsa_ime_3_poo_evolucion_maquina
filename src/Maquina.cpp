#include "Maquina.h"

#include <iostream>

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre), piezasProcesadas(0), tiempoTrabajadoSeg(0) {}

void Maquina::procesar() {
    std::cout << nombre << ": procesamiento generico\n";
    piezasProcesadas++;
    tiempoTrabajadoSeg += 10;
}

void Maquina::mostrarEstado() const {
    std::cout << nombre << " | piezas: " << piezasProcesadas
              << " | tiempo: " << tiempoTrabajadoSeg << " s\n";
}