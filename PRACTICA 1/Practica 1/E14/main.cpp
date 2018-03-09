/*Ejercicio 14.
Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.

Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48
*/

// Numeros columna 1: contador1
// Números columna 2: contador2
// Diferencia entre columnas: diferencia

#include <iostream>

using namespace std;

int main()
{
    int contador1=0 , contador2=0 , diferencia=49;


    while (contador1<=49){                                     //Ciclo que se ejecutará mientras el contador1 sea menor o igual a 49
        contador1++;                                           //La variable contador se incrementa en 1
        contador2=contador1+diferencia;                        //A la variable contador2 se le lleva la suma entre contador1 y diferencia
        diferencia=diferencia-2;                               //La variable diferencia se decrementa en 2

        if (contador1<=9)                                      //Condicional que se ejecuta si el contador1 es menor o igual a 9
            cout << contador1 << "   " << contador2 << endl;   //Imprime un espacio extra para imprimir bien las columnas

        else                                                   //Condicional que se ejecuta si el contador1 es mayor que 9
        cout << contador1 << "  " << contador2 << endl;}       //Imprime 2 espacios para separar las columnas

    return 0;
}
