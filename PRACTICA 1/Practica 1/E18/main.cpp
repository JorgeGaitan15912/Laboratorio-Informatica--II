/*Ejercicio 18.
Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.

Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.
*/

#include <iostream>

using namespace std;

int main()
{
    int numero=0 , modulo=0 , contador=0 , cuadrado=0;

    cout << "Ingrese un número: " << endl;
    cin >> numero;

    if (numero>=0){                                            //Condicional que se ejecuta si numero es mayor o igual a 0


            while (contador<=numero){                          //Ciclo que se ejecutará mientras el contador sea menor o igual a numero
                contador++;                                    //La variable contador se incrementa en 1
                modulo=numero%contador;                        //A numero se le aplica la operación modulo con el contador que va aumentando en cada iteración del ciclo y los resultados se le llevan a la variable modulo


                if (modulo==0){                                //Condicional que se ejecuta si el modulo es igual a 0
                    cuadrado= contador*contador;               //A la variable cuadrado se le lleva el resultado de multiplicar el contador por si mismo

                   if(cuadrado==numero){                       //Condicional que se ejecuta si la variable cuadrado es igual a numero e imprime que es un cuadrado perfecto
                      cout << numero << " es un cuadrado perfecto" << endl;
                      break;}                                  //Termina el programa

                        if(contador==numero){                  //Condicional que se ejecuta si la variable contador es igual a numero e imprime que NO es un cuadrado perfecto
                           cout << numero <<" NO es un cuadrado perfecto" << endl;}

                               }

                                       }

                    }

    else                                                       //Condicional que se ejecuta si el número ingresado es menor a 0 o negativo e imprime que no es válido
        cout << numero << " NO es un número inválido" << endl;

    return 0;

}
