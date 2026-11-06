#ifndef MAQUINA_H
#define MAQUINA_H

#include <string>

class Maquina {
private:
    std::string nombre;
    int piezasProcesadas;
    int tiempoTrabajadoSeg;

protected:
    // Solo las clases derivadas avisan a la base lo que ocurrio en un ciclo.
    void registrarPieza();
    void agregarTiempo(int segundos);

public:
    explicit Maquina(const std::string& nombre);
    virtual ~Maquina() = default;

    virtual void procesar();
    virtual int tiempoCicloSeg() const;
    double capacidadPorHora() const;

    const std::string& getNombre() const;
    int getPiezasProcesadas() const;
    int getTiempoTrabajadoSeg() const;
    void mostrarEstado() const;
};

#endif