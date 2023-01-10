/*
9. Realiza un programa que calcule la suma de dos matrices dinamicas
*/
#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

void aleatorios(int **,int,int);
void suma(int **,int**,int,int);
void Mostrar_Matriz(int **,int,int);

int main(int argc,char*argv[]){

    int **numero_matrices,**numero_matrices2,nFilas,nColumnas;

    aleatorios(numero_matrices,nFilas,nColumnas);
    aleatorios(numero_matrices2,nFilas,nColumnas);
    suma(numero_matrices,numero_matrices2,nFilas,nColumnas);
    Mostrar_Matriz(numero_matrices,nFilas,nColumnas);

    delete[] numero_matrices;
    delete[] numero_matrices2;
    system("pause");
    return 0;
}
void aleatorios(int **numero_matrices,int nFilas,int nColumnas){

    
    cout<<"Ingrese la cantidad de filas: "<<endl; cin>>nFilas;
    cout<<"Ingrese la cantidad de columnas: "<<endl; cin>>nColumnas;

    numero_matrices = new int*[nFilas];
    for(int i = 0; i <nFilas; i++){
        numero_matrices[i] = new int[nColumnas];
    }
    for (int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            *(*(numero_matrices+i)+j) = 1 + rand()%(50);
        }
    }
}
void suma(int **numero_matrices,int **numero_matrices2,int nFilas,int nColumnas){

    for(int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            *(*(numero_matrices+i)+j) +=  *(*(numero_matrices2+i)+j);
        }
    }
}
void Mostrar_Matriz(int **numero_matrices,int nFilas,int nColumnas){

    for(int i = 0; i < nFilas; i++){
        for(int j = 0; j < nColumnas; j++){
            printf(" %d\n",*(*(numero_matrices+i)+j));
        }
        printf("\n");
    }

}