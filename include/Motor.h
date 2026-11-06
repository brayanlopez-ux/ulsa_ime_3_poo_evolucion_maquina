#ifndef MOTOR_H
#define MOTOR_H

class Motor {
private:
    double velocidadMaxRpm;
    double velocidadActualRpm;

public:
    explicit Motor(double velocidadMaxRpm);

    void fijarVelocidad(double rpm);
    double getVelocidad() const;
};

#endif