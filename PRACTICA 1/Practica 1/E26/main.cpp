/*Ejercicio 26.
Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno)
que se formaría, si sus lados tienen la longitud definida por los números ingresados.
Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo.
*/


#include <iostream>

using namespace std;

int main()
{
    int lado1=0 , lado2=0 , lado3=0 ;

    cout << "Ingrese el valor del primer lado: " << endl;
    cin >> lado1;
    cout << "Ingrese el valor del segundo lado: " << endl;
    cin >> lado2;
    cout << "Ingrese el valor del tercer lado: " << endl;
    cin >> lado3;

    if (lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2){   //Condicional que se ejecuta si las tres condiciones se cumplen (Desigualdad del triángulo)

        if(lado1==lado2 && lado2==lado3)                                //Condicional que comprar si todos los lados son iguales
        cout << "Se forma un triangulo equilátero" << endl;

        else if (lado1==lado2 || lado2==lado3 || lado1==lado3)          //Condicional que compara si solo dos lados son iguales
        cout << "Se forma un triangulo isóceles" << endl;

        else                                                            //Condicional que se ejecuta si no se cumplen las dos condiciones anteriores
             cout << "Se forma un triangulo escaleno" << endl;

    }


    else                                                                //Condicional que se ejecuta si la primera condición (desigualdad del triángulo) no se cumple
        cout << "Las longitudes ingresadas no forman un triangulo" << endl;


    return 0;
}
