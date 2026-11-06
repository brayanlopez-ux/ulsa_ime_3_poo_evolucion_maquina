#ifndef MOTOR_H
#define MOTOR_H

namespace planta {

class Motor {
private:
    double velocidadMaxRpm;
    double velocidadActualRpm;

public:
    explicit Motor(double velocidadMaxRpm);

    void fijarVelocidad(double rpm);
    double getVelocidad() const;
};

}  // namespace planta

#endif