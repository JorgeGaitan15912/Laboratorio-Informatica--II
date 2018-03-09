/*
Ejercicio 6.
Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
A^B, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5∧3=125
*/


#include <iostream>

using namespace std;

int main()

{
    int numeroA , numeroB , contador=0, total=1;

    cout << "Ingrese un número A: " << endl;
    cin >> numeroA;

    cout << "Ingrese un número B: " << endl;
    cin>> numeroB;

    if (numeroB>=0) {                            //Condicional que se ejecuta si el numeroB es menor o igual a 0

    while (numeroB!=contador)                    //Ciclo que se ejecutará mientras numeroB sea diferente al contador
    {
        total *=numeroA;                         //A la variable total se le lleva la multiplicación entre total * numeroA
        contador++;                              //La variable contador se incrementa en 1

    }

    cout << "A^B es igual a: " << total << endl; //Imprime el último valor que toma la variable total y un salto de línea
}

    else {                                      //Condicional que se ejecuta si la variable numeroB es menor a 0
        cout << "Error... El número B es negativo" << endl;
    }


        return 0;
}
