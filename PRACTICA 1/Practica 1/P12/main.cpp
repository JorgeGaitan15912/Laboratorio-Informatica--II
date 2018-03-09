/*
Problema 12.

Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.*/


#include <iostream>

using namespace std;

int main()
{
    int numero=0 , factorp=0 , numeroI=0 , factorPM=0;


    cout << "Ingrese un número: " << endl;
    cin >> numero;
    numeroI=numero;

    if (numero>0){                                                       //Condicional que se ejecuta si numero es mayor que 0

    for(factorp=2 ; numeroI > 1 ; factorp++){                           //Ciclo que se ejecuta mientras numeroI sea mayor que 1 y a factorp se le va sumando 1, finaliza cuando el numero ingresado ya no se pueda dividir y a su vez va incrementando factorp en 1 que es el que lo divide

        while (numeroI%factorp==0){                                     //Ciclo que se ejecuta mientras numeroI%factorp==0 , se ejecuta mientras el numero ingresedo sea divisible enteramentre entre factorp
            numeroI/=factorp;                                           //A la variable numeroI se le lleva el resultado de la división entera entre numeroI entre factorp
            factorPM=factorp;                                           //A la variable factorPM se le lleva los valores que va tomando factorp para que está no se vea afectada por el ciclo for

        }

    }

    cout << "El mayor factor primo de " << numero << " es: " << factorPM << endl;

    }

    else if (numero==0)                                               //Condicional que se ejecuta si numero es igual a 0
        cout << "El número cero posee infinitos factores primos" << endl;

    else if (numero<0)                                                //Condicional que se ejecuta si numero es menor que 0
        cout << "El número es negativo , no es válido" << endl ;







    return 0;
}
