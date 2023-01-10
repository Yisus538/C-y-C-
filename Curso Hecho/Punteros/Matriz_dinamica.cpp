/*
 Hacer un matriz dinamica con doble puntero.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

//¨Prototipo de Funcion.
void Pedirdatos(int **,int,int);
void Mostrar(int **,int,int);

int main(int argc,char*argv[]){

    int **puntero_matriz,nFilas,nColumnas;

    Pedirdatos(puntero_matriz,nFilas,nColumnas);
    Mostrar(puntero_matriz,nFilas,nColumnas);

    for(int i = 0; i <nFilas; i++){
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;

    system("pause");
    return 0;
}
void Pedirdatos(int **puntero_matriz,int nFilas,int nColumnas){


    cout<<"Ingrese numero de filas: "<<endl;
    cin>>nFilas;
    cout<<"Ingrese numero de columnas: "<<endl;
    cin>>nColumnas;

    puntero_matriz = new int*[nFilas];
    for(int i = 0; i < nFilas; i++){
        puntero_matriz[i] = new int[nColumnas];
    }

    //Escribir numero de elementos: 
    for(int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            cout<<"Digite un numero["<<i<<"]"<<"["<<j<<"]"<<" = "<<endl;
            cin>>*(*(puntero_matriz+i)+j);
        }
    }

}
void Mostrar(int **puntero_matriz,int nFilas,int nColumnas){3


    cout<<"\nImprimiendo Matriz"<<endl;

    for(int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            cout<<*(*(puntero_matriz+i)+j);
        }
        cout<<"\n";
    }

}