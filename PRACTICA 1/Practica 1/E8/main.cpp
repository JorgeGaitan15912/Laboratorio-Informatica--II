/*Ejercicio 8.
Escriba un programa que pida un número N e imprima en pantalla su factorial.

Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120

*/

#include <iostream>

using namespace std;

int main()
{
    int numero=0 , contador , factorial=1;

    cout << "Ingrese un número N: " << endl;
    cin >> numero;

 if (numero>=0) {                                           //Condicional que se ejecuta si el número es mayor o igual a 0

        for (contador=1 ; contador<=numero ; contador++){   //Ciclo que se ejecuta hasta que la variable contador sea mayor que el número
            factorial*=contador;                            //A la variable factorial se le lleva la multiplicación entre factorial * contador
        }

}

 else {                                                     //Condicional que se ejecuta si la variable numero es menor a 0

         for (contador=numero ; contador<=-1 ; contador++)  //Ciclo que se ejecutará mientras que el contador sea menor o igual a -1
             factorial*=contador;                           //A la variable factorial se le lleva la multiplicación entre factorial * contador
 }

    cout << numero << "!=" << factorial << endl;

    return 0;
}
