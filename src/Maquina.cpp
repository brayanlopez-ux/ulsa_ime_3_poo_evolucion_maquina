#include "Maquina.h"

#include <iostream>
#include <stdexcept>

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre), piezasProcesadas(0), tiempoTrabajadoSeg(0) {
    if (nombre.empty()) {
        throw std::invalid_argument("El nombre de la maquina no puede estar vacio");
    }
}

void Maquina::registrarPieza() {
    piezasProcesadas++;
}

void Maquina::agregarTiempo(int segundos) {
    if (segundos <= 0) {
        throw std::invalid_argument("El tiempo debe ser mayor que cero");
    }
    tiempoTrabajadoSeg += segundos;
}

void Maquina::procesar() {
    std::cout << nombre << ": procesamiento generico\n";
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Maquina::tiempoCicloSeg() const {
    return 10;
}

double Maquina::capacidadPorHora() const {
    return 3600.0 / tiempoCicloSeg();
}

const std::string& Maquina::getNombre() const {
    return nombre;
}

int Maquina::getPiezasProcesadas() const {
    return piezasProcesadas;
}

int Maquina::getTiempoTrabajadoSeg() const {
    return tiempoTrabajadoSeg;
}

void Maquina::mostrarEstado() const {
    std::cout << nombre << " | piezas: " << piezasProcesadas
              << " | tiempo: " << tiempoTrabajadoSeg << " s"
              << " | capacidad: " << capacidadPorHora() << " pzas/h\n";
}