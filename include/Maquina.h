#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>

// Clase base abstracta de todas las maquinas de la planta.
//
// CONTRATO para toda clase derivada:
//   1. ejecutarCiclo() realiza el trabajo fisico de UN ciclo.
//   2. tiempoCicloSeg() devuelve los segundos de un ciclo; siempre es
//      mayor que cero.
// La base es quien registra la pieza y el tiempo de cada ciclo, y quien
// verifica que el tiempo sea valido.
class Maquina {
private:
    std::string nombre;
    int piezasProcesadas;
    int tiempoTrabajadoSeg;

    void registrarPieza();
    void agregarTiempo(int segundos);
    int tiempoCicloValidado() const;

    // Lo que cada maquina hace en un ciclo. Solo la base lo llama.
    virtual void ejecutarCiclo() = 0;

public:
    explicit Maquina(const std::string& nombre);
    virtual ~Maquina() = default;

    // Procesa exactamente una pieza. No es virtual: ninguna derivada
    // puede cambiar las reglas del ciclo.
    void procesar();

    virtual int tiempoCicloSeg() const = 0;
    double capacidadPorHora() const;

    const std::string& getNombre() const;
    int getPiezasProcesadas() const;
    int getTiempoTrabajadoSeg() const;
    void mostrarEstado() const;
};

#endif