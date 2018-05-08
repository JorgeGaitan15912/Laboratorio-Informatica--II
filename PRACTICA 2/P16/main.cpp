/*
Problema 16.
En una malla de 2x2, realizando únicamente movimientos hacia la derecha y hacia abajo hay 6
posibles caminos para llegar de la esquina superior izquierda a la inferior derecha como se observa en la Figura 7.

Escriba un programa que reciba un numero n y calcule el número de caminos posibles en una cuadricula de nxn.

Nota: la salida del programa debe ser:
Para una malla de 2x2 puntos hay 6 caminos.*/


#include <iostream>
#include <math.h>

using namespace std;


long unsigned int Factorialn (int n); //Prototipo de la función Factorialn

//Variables globales
long long unsigned int factorialn=1;


int main()
{
    int n=0;
    long long unsigned int posibles=0 , factorial2n=0;

    cout << "Ingrese un numero n: ";
    cin >> n;

    if(n>=0){

    factorial2n= Factorialn(2*n);
    factorialn= Factorialn(n);

    //Formula para encontar los valores de la vertical principal del triangulo de pascal
    posibles= factorial2n/(factorialn*factorialn);

    cout << "Para la malla de " << n << "x" << n << " hay " << posibles << " posibles caminos" << endl;}

    else{
        cout << "Número inválido" << endl;}

        return 0;
    }


long unsigned int Factorialn (int n){ //Implementación de la función Factorialn

    int contador;


    factorialn=1;
    if (n>=0) {

        for (contador=1 ; contador<=n ; contador++)
            factorialn*=contador;}

    return factorialn;

}
