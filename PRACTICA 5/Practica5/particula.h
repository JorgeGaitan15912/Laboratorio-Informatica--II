#ifndef PARTICULA_H
#define PARTICULA_H
#define Grav 1
#define DeltaT 1
#include <iostream>
using namespace std;


class Particula
{
private:
    //Atributos primario
    float px;
    float py;
    float masa;
    float radio;
    float vx;
    float vy;

    //Atributos secundarios
    float angulo;
    float ax;
    float ay;


public:
    //Constructores
    Particula();
    Particula(float _px, float _py, float _masa, float _radio, float _vx, float _vy);

    //Métodos -> (get, get)
    float getPx() const;
    float getPy() const;
    float getMasa() const;
    float getRadio() const;
    float getVx() const;
    float getVy() const;
    float getAngulo() const;
    float getAx() const;
    float getAy() const;

    void setPx(float value);
    void setPy(float value);
    void setMasa(float value);
    void setRadio(float value);
    void setVx(float value);
    void setVy(float value);
    void setAngulo(float value);
    void setAx(float value);
    void setAy(float value);

    //Métodos -> simulación
    void interaccion(Particula par);
    void posicion();




};

#endif // PARTICULA_H
