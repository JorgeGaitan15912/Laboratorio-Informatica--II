/*
Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.

Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).
*/

#include <iostream>
#include <cstdlib> //Librería que contiene la función rand() y srand(). Además contiene la expresión NULL

using namespace std;

int main()
{
    int numeroA=0 , numeroB=0 , contador=1;

    srand(time(NULL));                                                       //Función que genera un número al azar
    numeroA = rand()% 100 + 1;                                               //A la varible numeroA se le lleva el numero generado al azar pero en un rango de 0 a 100
    //cout << numeroA << endl;

    cout << "* Trate de adivinar un número del 1 al 100: " ;
    cin >> numeroB;

    do {                                                                     //Instrucciones que se leerán antes del ciclo while
        if (numeroA<numeroB){                                                //Condicional que se ejecuta si numeroA es menor a numeroB y entrará dentro para imprimir que el numero es menor al ingresado
            cout << "El número es menor al ingresado , vuelva a intentarlo: " ;
            cin >> numeroB;
            contador++;}                                                     //La variable contador se incrementa en 1 y esté servira para contar los intentos

        else if (numeroA>numeroB){                                           //Condicional que se ejecuta si numeroA es mayor a numeroB y entrará dentro para imprimir que el numero es mayor al ingresado
            cout << "El número es mayor al ingresado , vuelva a intentarlo: " ;
            cin >> numeroB;
            contador++;}                                                     //La variable contador se incrementa en 1 y esté servira para contar los intentos

        }

     while (numeroA!=numeroB);                                               //Ciclo que se ejecutará mientras numeroA sea diferente a numeroB , en otras palabras hasta que el usuario no adivine el número generado al azar del 0 al 100

     cout << "Lo adivinaste, el número fue: "<< numeroA << endl << "Intentos: " << contador << endl;



   return 0;
}
