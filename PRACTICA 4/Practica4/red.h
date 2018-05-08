#ifndef RED_H
#define RED_H
#include"enrutador.h"
#include<iostream>
#include<map>
using namespace std;

class Red
{
private:
    string nombre,nombre2;
    int cantidad,costo;
    map<string,Enrutador>Redes;

public:
    Red();
    void crearRed();
    void conexiones();
    void imprimir();


};

#endif // RED_H
