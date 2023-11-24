/*
 Hacer un matriz dinamica con doble puntero.
*/
#include <iostream>
#include <stdlib.h>

//¨Prototipo de Funcion.
static void Pedirdatos(int**,int,int);
static void Mostrar(int**,int,int);

int main(int argc,char*argv[]){

    int** puntero_matriz,nFilas,nColumnas;

    Pedirdatos(puntero_matriz,nFilas,nColumnas);
    Mostrar(puntero_matriz,nFilas,nColumnas);

    for(int i = 0; i <nFilas; i++){
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;

    system("pause");
    return 0;
}
static void Pedirdatos(int** puntero_matriz,int nFilas,int nColumnas){


    std::cout<<"Ingrese numero de filas: "<<std::endl;
    std::cin>>nFilas;
    std::cout<<"Ingrese numero de columnas: "<<std::endl;
    std::cin>>nColumnas;

    *puntero_matriz = new int[nFilas];
    for(int i = 0; i < nFilas; i++){
        puntero_matriz[i] = new int[nColumnas];
    }

    //Escribir numero de elementos: 
    for(int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            std::cout<<"Digite un numero["<<i<<"]"<<"["<<j<<"]"<<" = "<<std::endl;
            std::cin>>*(*(puntero_matriz+i)+j);
        }
    }

}
static void Mostrar(int** puntero_matriz,int nFilas,int nColumnas){


    std::cout<<"\nImprimiendo Matriz"<<std::endl;

    for(int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            std::cout<<*(*(puntero_matriz+i)+j);
        }
        std::cout<<"\n";
    }

}