/*Problema 4.
Escriba un programa para leer dos números enteros con el siguiente significado:

El valor del primer número representa una hora del día en un reloj de 24 horas, de modo que 1245
representa las doce y cuarenta y cinco de la tarde.

El segundo entero representa un tiempo de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos.

El programa debe sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso
1630, que es el tiempo de 3 horas y 45 minutos después de 12:45.


Nota: el formato de salida debe ser: La hora es 16:30.

Otra nota: se debe imprimir un mensaje como el siguiente cuando uno de los datos ingresados es
inválido: 1560 es un tiempo invalido.

*/


#include <iostream>

using namespace std;

int main()
{
    int numero1=0 , numero2=0 , horas1=0 , minutos1=0 , horas2=0 , minutos2=0 , horast=0 , minutost=0;

    cout << "Ingrese el primer tiempo: " << endl;
    cin >> numero1;

    minutos1=numero1%100;                                                                      //A la variable minutos1 se le lleva el residuo al aplicarle modulo 100 a numero1 ingresado por el usuario para tener las dos últimas cifras
    horas1=numero1/100;                                                                        //A la variable horas1 se le lleva el resultado al aplicarle división entera a numero1 entre 100 para tener las primeras cifras



    while ( (minutos1>=60) || (horas1>=24) ){                                                 //Ciclo que se ejecutará hasta que el usuario ingrese un número válido que no se salga del rango y el formato de las 24 horas
        cout << "El tiempo ingresado: " << numero1 << " no es válido , vuelva a intentarlo" << endl << endl;
        //
        cout << "Ingrese el primer tiempo: " << endl;
        cin >> numero1;
        minutos1=numero1%100;                                                                 //A la variable minutos1 se le lleva el residuo al aplicarle modulo 100 a numero1 ingresado por el usuario para tener las dos últimas cifras
        horas1=numero1/100;                                                                   //A la variable horas1 se le lleva el resultado al aplicarle división entera a numero1 entre 100 para tener las primeras cifras
    }




    cout << "Ingrese el segundo tiempo: " << endl;
    cin >> numero2;

    minutos2=numero2%100;                                                                     //A la variable minutos2 se le lleva el residuo al aplicarle modulo 100 a numero2 ingresado por el usuario para tener las dos últimas cifras
    horas2=numero2/100;                                                                       //A la variable horas2 se le lleva el resultado al aplicarle división entera a numero2 entre 100 para tener las primeras cifras

    while ((minutos2>=60) || (horas2>=24)){                                                   //Ciclo que se ejecutará hasta que el usuario ingrese un número válido que no se salga del rango y el formato de las 24 horas
        cout << "El tiempo ingresado: "<< numero2 << " no es válido , vuelva a intentarlo" << endl <<endl;
        //
        cout << "Ingrese el segundo tiempo: " << endl;
        cin >> numero2;
        minutos2=numero2%100;                                                                 //A la variable minutos2 se le lleva el residuo al aplicarle modulo 100 a numero2 ingresado por el usuario para tener las dos últimas cifras
        horas2=numero2/100;                                                                   //A la variable horas2 se le lleva el resultado al aplicarle división entera a numero2 entre 100 para tener las primeras cifras
    }


    minutost=minutos1+minutos2;                                                               //A la variable minutost se le lleva la suma entre minutos1 y minutos2
    horast=horas1+horas2;                                                                     //A la variable horast se le lleva la suma entre horas1 y horas2

    if (minutost>=60){                                                                        //Condicional que se ejecuta si los minutost son mayores o iguales a 60
        horast++;                                                                             //La variable horast se incrementa en 1
        minutost=minutost%60;                                                                 //A la variable minutost se le lleva el residuo al aplicarle modulo 60 a minutost, en el caso de que minutost sea igual a 60 a esté se le llevará un cero


        if (horast>24){                                                                       //Condicional que se ejecuta si horast superán las 24 horas y entra al ciclo a imprimir que un mensaje de error
            cout << endl << "Tiempo1: " << horas1 << ":" << minutos1 << endl;
            cout <<"Tiempo2: " << horas2 << ":" << minutos2 << endl;
            cout << "la suma de los tiempos no es válido ya que superan el formato de las 24 horas" << endl;
            return 0;
        }

        else if (horast==24)                                                                 //Condicional que se ejecuta si las horast son iguales a 24
            horast=0;                                                                        //A la variable horast se le lleva un cero que representa las 24 horas en un reloj de 24 horas

    }

    /*else if (horast >= 24){                                                               //Condicional que se ejecuta si horast superán o son iguales a las 24 horas y entra al ciclo a imprimir que un mensaje de error
        cout << endl << "Tiempo1: " << horas1 << ":" << minutos1 << endl;
        cout <<"Tiempo2: " << horas2 << ":" << minutos2 << endl;
        cout << "la suma de los tiempos no es válido ya que superan el formato de las 24 horas" << endl;
        return 0;

    }*/


    cout << endl << "Tiempo1: " << horas1 << ":" << minutos1 << endl;
    cout <<"Tiempo2: " << horas2 << ":" << minutos2 << endl;
    cout << endl << "La hora es: " << horast << ":" << minutost << endl;


    return 0;
}
