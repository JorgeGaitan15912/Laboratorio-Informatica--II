/*Problema 16.
La serie de Collatz se conforma con la siguiente regla:

sea n un elemento de la serie, si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.

Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.


Tip: la serie termina al llegar a un elemento cuyo valor sea 1.

Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1

Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.

Otra nota: se le dará una bonificación si imprime la serie.*/



#include <iostream>

using namespace std;

int main()
{


    int numerok=0 , contador=0 , numeroI=0;

    cout << "Ingrese un número: ";
    cin >> numerok;
    cout << endl;
    numeroI=numerok;


   do {                                                 //Instrucciones que se leerán antes del ciclo while


        if (numerok%2==0){                              //Condicional que se ejecuta si numerok es par
            numerok= numerok/2;                         //La variable numerok se divide entre 2

            if (numerok==1){                            //Condicional que se ejecuta si numerok es igual a 1
                cout << numerok;
                contador++;                             //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                break;}                                 //Termina el programa

            cout << numerok << ", ";
            contador++;                                 //La variable contador se incrementa en 1, cuenta los elementos de la secuencia


    }

        else {                                          //Condicional que se ejecuta si numerok es impar
            numerok= (3*numerok)+1;                     //La variable numerok se le multiplica por 3 y se le suma 1
            cout << numerok << ", ";
            contador++;                                 //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
        }


    }

    while (numerok!=1);                                 //Ciclo que se ejecutará mientras numerok sea diferente de 1
    cout << endl << endl;
    cout << "Esta es la serie más larga con la semilla: "<< numeroI << ", teniendo "<< contador <<" términos." << endl << endl;
    return 0;
}
