/*
Problema 8. Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.

Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.

Texto: abcrst. Numero: 54.
*/




#include <iostream>
using namespace std;

int main(){


    char ingresados [20]="";
    char letras [20]="";
    char numeros [20]="";
    int j=0 , k=0;

    cout << "Ingrese la cadena de caracteres: ";
    cin >> ingresados;

    for (int i=0 ; i<20 ; i++){

        if ((int)*(ingresados+i)==0){
            break;}


        if ((48<=(int)*(ingresados+i))  &&  (((int)*(ingresados+i))<=57)){
            *(numeros+j)=*(ingresados+i); j++;}

        else{
            *(letras+k)=*(ingresados+i); k++;}

    }


    cout << "Original: " << ingresados <<  "     Letras: " << letras << "     Números: " << numeros <<  endl;
    return 0;

}

