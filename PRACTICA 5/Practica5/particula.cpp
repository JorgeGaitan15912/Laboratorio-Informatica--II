#include "particula.h"
#include <iostream>
#include <math.h>
using namespace std;

//Constructores
Particula::Particula()
{}

Particula::Particula(float _px, float _py, float _masa, float _radio, float _vx, float _vy)
{
    px=_px;
    py=_py;
    masa=_masa;
    radio=_radio;
    vx=_vx;
    vy=_vy;
}


//Métodos -> (get, get)
float Particula::getPx() const
{return px;}
float Particula::getPy() const
{return py;}
float Particula::getMasa() const
{return masa;}
float Particula::getRadio() const
{return radio;}
float Particula::getVx() const
{return vx;}
float Particula::getVy() const
{return vy;}
float Particula::getAngulo() const
{return angulo;}
float Particula::getAx() const
{return ax;}
float Particula::getAy() const
{return ay;}

void Particula::setPx(float value)
{px = value;}
void Particula::setPy(float value)
{py = value;}
void Particula::setMasa(float value)
{masa = value;}
void Particula::setRadio(float value)
{radio = value;}
void Particula::setVx(float value)
{vx = value;}
void Particula::setVy(float value)
{vy = value;}
void Particula::setAngulo(float value)
{angulo = value;}
void Particula::setAx(float value)
{ax = value;}
void Particula::setAy(float value)
{ay = value;}

//Métodos -> simulación
void Particula::interaccion(Particula par)
{
    //Ecuaciones
    radio= sqrt(pow((par.px-px),2) + pow ((par.py-py),2));   
    angulo= atan2(par.py-py, par.px-px);

    ax= ((Grav*par.masa)/pow(radio,2))* cos(angulo);
    ay= ((Grav*par.masa)/pow(radio,2))* sin(angulo);

    vx=vx+(ax*DeltaT);    
    vy=vy+(ay*DeltaT);
}

void Particula::posicion()
{
    //Ecuaciones
    //cout << px << "\t" << py << "\t";
    px=px+(vx*DeltaT)+((ax*pow(DeltaT,2)/2.0));
    py=py+(vy*DeltaT)+((ay*pow(DeltaT,2)/2.0));
    radio=0;
    angulo=0;
}



/*Impresión valores
//cout << "radio: " << radio << endl;
//cout << "px2: " << par.px <<endl;
//cout << "px2: " << par.py<<endl;
//cout << "angulo: " << angulo << endl;
//cout << "ax: " << ax << endl;
//cout << "ay: " << ay << endl;
//cout << "vx: " << vx << endl;
//cout << "vy: " << vy << endl;*/
