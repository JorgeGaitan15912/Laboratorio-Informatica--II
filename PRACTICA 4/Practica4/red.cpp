#include "red.h"

Red::Red()
{

}

void Red::crearRed()
{
    cout<<"Ingrese el numero de enrutadores que va tener la red: ";
    cin>>cantidad;

    for(int i=0; i<cantidad; i++){
        cout<<"Ingrese el nombre para el enrutador "<<i+1<<": ";
        cin>>nombre;
        nombre2=nombre;
        Enrutador nombre(nombre2);
        Redes[nombre2]=nombre;

    }

}

void Red::conexiones()
{
    bool ban=false;
    cout<<"Ingrese el nombre del enrutador al que va agregar conexiones: ";
    cin>>nombre;
    cout<<"Ingrese el numero de conexiones que desea agregar: ";
    cin>>cantidad;

    map<string,Enrutador>::iterator it;

    for(int i=0; i<cantidad; ){

        if(ban){cout<<"El enrutador "<<nombre2<<" no ha sido creado, ingrese un enrutador valido."<<endl;}
        ban=true;

        cout<<"Ingrese el nombre del enrutador que desea conectar: ";
        cin>>nombre2;

        for(it=Redes.begin(); it!=Redes.end(); it++){
            if(it->first==nombre2){
                cout<<"Ingrese el costo de la conexion: ";
                cin>>costo;
                Redes[nombre].agregarNodo(&(Redes[nombre2]),costo);
                ban=false;
                i++;
            }
        }

    }

}

void Red::imprimir()
{
    cout<<"Ingrese el nombre del enrutador para mostrar sus conexiones ";
    cin>>nombre;
    Redes[nombre].imprimirNodos();
    Redes[nombre].crearTabla();
    cout<<endl<<endl;
    Redes[nombre].imprimirNodosAccesibles();
}


