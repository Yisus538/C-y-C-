/*
16. Realiza una funcion que dada una matriz y un numero de filas de la matriz devuelva
 el menor de los elementos almacenados en dicha fila.
*/
#include <iostream>
#include <stdlib.h>


void pedirdatos();
int menor(int[][100],int,int);

int v[100][100],ncolumnas,nfilas;

int main(int argc,char*argv[]){

    pedirdatos();

    std::cout<<"El menor numero es: "<<menor(v,nfilas,ncolumnas)<<std::endl;

    system("pause");
    return 0;
}
void pedirdatos(){

    std::cout<<"Digite el numero de filas: "<<std::endl;
    std::cin>>nfilas;
    std::cout<<"Digite el numero de columnas: "<<std::endl;
    std::cin>>ncolumnas;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){

            printf("Ingrese el numero[%d][%d]: ",i,j);
            scanf(" %d", &v[i][j]);

        }
    }

}
int menor(int v[][100],int nfilas,int ncolumnas){

    int fila=0,menor=9999;

    std::cout<<"Digite un numero de fila para comprobar el menor elemento: "<<std::endl;
    std::cin>>fila;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){
            if(i==fila){
                if(v[i][j] < menor){
                    menor = v[i][j];
                }
            }

        }
    }

    return menor;

}