/*Problema 8.
Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c.

Tenga en cuenta no sumar 2 veces los múltiplos comunes.

Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23

Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.

Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.

m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.
*/


#include <iostream>

using namespace std;

int main()
{

    int numeroa=0 , numerob=0 , numeroc=0 , contador=1 , multiplosa=0 , multiplosb=0 , sumaa=0 ,sumab=0 ;

    cout << "Ingrese el valor para a : " << endl ;
    cin >> numeroa;
    cout << "Ingrese el valor para b : " << endl ;
    cin >> numerob;
    cout << "Ingrese el valor para c : " << endl ;
    cin >> numeroc;
    cout << endl << "la suma total de todos los multiplos de a y b sin sumar los repetidos es: " << endl;


        for (contador=1 ; multiplosa<numeroc-numeroa ; contador++){             //Ciclo que se ejecutará mientras multiplosa sea menor que numeroc-numeroa y la varible contador se incrementará en 1
             multiplosa=numeroa*contador;                                       //A la variable multiplosa se le lleva el resultado de multiplicar numeroa con el contador, o sea los multiplos de numeroa
             cout << multiplosa << " + ";

             if (multiplosa%numerob==0)                                         //Condicional que se ejecuta si los multiplos de numeroa hacen parte de los multiplos de numerob
                 sumaa+=0;                                                      //A la variable sumaa se la va sumando 0

             else                                                               //Condicional que se ejecuta si los multiplos de numeroa no son multiplos de numerob
                 sumaa+=multiplosa;                                             //A la variable sumaa se le van sumando los multiplos de numeroa


        }

       for (contador=1 ; multiplosb<numeroc-numerob ; contador++){              //Ciclo que se ejecutará mientras multiplosb sea menor que numeroc-numerob y la varible contador se reinicia en 1 y se va incrementando en 1
             multiplosb=numerob*contador;                                       //A la variable multiplosb se le lleva el resultado de multiplicar numerob con el contador, o sea los multiplos de numerob
             sumab+=multiplosb;                                                 //A la variable sumab se le van sumando los multiplos de numerob
             cout << multiplosb;

             if (multiplosb<numeroc-numerob)                                    //Condicional que se ejecuta si multiplosb es menor que numeroc-numerob, su uso es para que al final no imprima un signo + de más
                 cout << " + " ;

       }


        sumaa=sumaa+sumab;                                                      //A la variable sumaa se le lleva la suma entre sumaa y sumab, osea de todos los multiplos no repetidos de numeroa y numerob
        cout << " = " << sumaa << endl;



    return 0;
}
