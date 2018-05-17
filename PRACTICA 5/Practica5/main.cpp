#include <iostream>
#include "particula.h"
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    vector <Particula> sistema;
    int particulas=0 ,tam=0, opc=1 ;
    string nombre="Particula";
    float pxi=0, pyi=0, masa=0, radio=0, vxi=0, vyi;

    fstream escritura;
    escritura.open("Datos.txt",ios::out);

    do{
        cout <<"MENU" << endl <<
               "1. Creación del sistema" << endl <<
               "2. Poner a interactuar las particulas del sistema" << endl <<
               "0. Salir" << endl << endl <<
               "Ingrese una opción: ";

        cin>>opc;

    switch (opc) {
    case 1:
        //Creación del sistema
        system("clear");
        cout << "Cuantas partículas va a tener su sistema: ";
        cin >> particulas;

        for(int i=0 ; i< particulas ; i++){
        cout << nombre+ " " + char(i+49) <<endl;
        cout << "ingrese los valores para pxi, pyi, masa, radio, vxi, vyi cada valor separado con un espacio: ";
        cin >> pxi; cin >> pyi; cin >> masa; cin >> radio; cin >> vxi; cin >> vyi;
        cout << endl;

        nombre=nombre+char(i+48);
        Particula nombre (pxi,pyi,masa,radio,vxi,vyi);
        sistema.push_back(nombre);
        }
        break;

    case 2:
        //Interacción de particulas
        system("clear");
        if(escritura.is_open()){cout << "Abierto" << endl;}

        tam=sistema.size();
        cout <<"El sistema tiene "<< tam <<" particulas y se han puesto a interactuar entre sí" << endl;

        for(int i=0 ; i<10000 ; i++){
            for(int k=0; k<tam; k++){
                for(int j=0; j<tam; j++){
                    if(j!=k){
                        sistema[k].interaccion(sistema[j]);
                    }
                }
            }

            for(int p=0; p<tam; p++){
                escritura<<sistema[p].getPx()<<"\t"<<sistema[p].getPy()<<"\t";
                sistema[p].posicion();

            }
            escritura<<endl;
        }

        escritura.close();
        break;

    case 0:
        break;

    default:
        cout << "Ingrese una opción válida" << endl;
        break;
    }


    }while (opc);

    return 0;
}
/*Datos
Ejemplo 1:
0 -7000 70 120 2 0
0 0 70000 300 0 0
4000 5000 25 100 -1.6 1.2

Ejemplo 2:
0 0 50000 200 0 0
-5000 0 70 70 0 -2
5000 0 70 70 0 2
0 -5000 70 70 2 0
0 5000 70 70 -2 0
*/
