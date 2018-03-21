/*
Problema 12.
Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante.

Escriba un programa que permita al usuario ingresar una matriz cuadrada,
imprima la matriz y verifique si la matriz es un cuadrado
mágico.

Nota: un ejemplo de cuadrado mágico es el siguiente:

| 4 | 9 | 2 |
| 3 | 5 | 7 |
| 8 | 1 | 6 |


*/

#include <iostream>

using namespace std;

int main()
{
    int n=0 , i=0 , j=0 , sumad=0 , sumasf=0 , sumaft=0 , sumasc=0 , sumact=0 ;
    bool Cuadrado =false;

    cout <<"Ingrese el numero de filas y columnas que tendrá la matriz: ";
    cin >> n;

    int matriz [n][n] , sumaf [n] , sumac[n]  ;

    //Asignale valores a las posiciones de la matriz
    for(i=0 ; i<n ; i++){                                                                        //Filas
        for(j=0 ; j<n ; j++){                                                                    //Columnas
            cout << "Ingrese el valor del elemento [" << i << "]" << "[" << j << "]: ";
            cin >> matriz [i][j];
        }
    }

    cout << endl << "La matriz es: " << endl;

    //Imprimir la matriz
    for (i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++)
            cout << " | " << matriz [i][j];

        cout << " |" << endl;
    }



    cout << endl << "Suma de filas: " << endl;

    //Suma filas
    for (i=0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            sumasf+=matriz[i][j];
            sumaft+=matriz[i][j];
        }

        sumaf[i]=sumasf;
        cout << "F [" << i << "]: " << sumasf << endl;
        sumasf=0;
    }
    cout << "Suma total de las fila: " << sumaft << endl;



    cout << endl << "Suma de columnas: " << endl;

    //Suma columnas
    for (j=0 ; j<n ; j++){
        for(i=0 ; i<n ; i++){
            sumasc+=matriz[i][j];
            sumact+=matriz[i][j];
        }

        sumac[j]=sumasc;
        cout << "C [" << j << "]: " << sumasc << endl;
        sumasc=0;
    }
    cout << "Suma total de las columnas: " << sumact << endl;



    //Suma diagonal
    for(i=0 , j=0 ; j<n ;j++ , i++){
       sumad+= matriz[i][j];}

    cout << "Suma total de la diagonal: " << sumad << endl ;



    //Compara la suma de las filas con la suma de las columnas y la suma de la diagonal

    for (i=0; i<n ; i++){

        if ((*(sumaf+i) == *(sumac+i)) && sumad == *(sumaf+i))
            Cuadrado=true;

        else
            Cuadrado=false;}

    if(Cuadrado==true)
        cout << endl << "SI ES UN CUADRADO MAGIGO" << endl;

    else
         cout << endl << "NO ES UN CUADRADO MAGIGO" << endl;

 return 0;
}
