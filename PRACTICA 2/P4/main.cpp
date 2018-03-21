/*Problema 4.
Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.

Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.
*/

#include <iostream>
using namespace std;

void str_int();
char strnumeros [100];


int main()
{

    cout << "Ingrese una cadena de caracteres numéricos: ";
    cin >> strnumeros;

    cout << "El número ingresado es: ";

    str_int();

    return 0;
}
//(int)*(strnumeros+i) == (int)strnumeros[i]

void str_int(){
    for (int i=0 ; i<100 ; i++){

        if ((int) *(strnumeros+i)==0){
            cout << endl;
            break;}

           cout << ((int) *(strnumeros+i)) -48;}
}
