/*
  1. Hacer un programa para rellenar una matriz pidiendo ak usuario el numero de filas y
  columnas, Posteriormente mostrar la m,atriz en pantalla.
*/
#include <stdio.h>
#include <stdlib.h>


int main(){

    int vector[100][100]={0},filas=0,columnas=0;

    printf("Digite el numero de filas: \n");
    scanf(" %d", &filas);
    printf("Digite el numero de columnas: \n");
    scanf(" %d", &columnas);


    //Almacenando elementos en la matriz.
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){

           printf("Digite un numero[%d][%d]: ",i,j);
           scanf(" %d", &vector[i][j]);

        }
    }
    //Mostrando Matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
           printf("Fila [%d] Columna[%d] = %d \n",i,j,vector[i][j]);
        }
    }

    system("pause");
    return 0;
}