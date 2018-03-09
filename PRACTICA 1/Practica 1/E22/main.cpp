/*Ejercicio 22.
Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37*/


#include <iostream>

using namespace std;

int main()
{
    int horas=0 , minutos=0 , segundos=0 ;

    cout << "Ingrese los segundos: " << endl;
    cin >> segundos;

    minutos=segundos/60;             //A la variable minutos se le lleva la división entera entre los segundos ingresados por el usuario y 60
    segundos=segundos%60;            //A la variable segundos se le lleva el residuo de de aplicale la operacion modulo 60 a los segundos ingresados por el usuario

            if (minutos>=60){        //Condicional que se ejecuta si los minutos son mayores o iguales a 60
                horas=minutos/60;    //A la variable horas se le lleva la división entera entre minutos y 60
                minutos=minutos%60;} //A la variable minutos se le lleva el residuo al aplicarle la operación modulo 60 a los minutos

      cout << "h: " << horas << "  m: " << minutos << "   s: " << segundos <<endl;

    return 0;


}
