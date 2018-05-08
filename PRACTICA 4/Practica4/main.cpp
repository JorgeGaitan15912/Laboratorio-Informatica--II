#include <iostream>
#include<map>
#include "enrutador.h"
#include"red.h"

using namespace std;

int main()
{
    Red red;
    int opc=0;
    do{
        cout<<"MENU"<<endl;
        cout<<"1. Crear red"<<endl;
        cout<<"2. Agregar conexiones"<<endl;
        cout<<"3. Imprimir"<<endl;
        cout<<"0. salir"<<endl;
        cout<<"Ingrese la opcion deseada: ";
        cin>>opc;

        switch (opc) {
        case 1:
            red.crearRed();
            break;
        case 2:
            red.conexiones();
            break;
        case 3:
            red.imprimir();
            break;
        case 0:
            break;
        default:
            cout<<"Ingrese una opcion valida."<<endl;
            break;
        }

    }while(opc);

    return 0;
}
