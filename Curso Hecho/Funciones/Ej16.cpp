/*
16. Realiza una funcion que dada una matriz y un numero de filas de la matriz devuelva
 el menor de los elementos almacenados en dicha fila.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirdatos();
int menor(int v[][100],int,int);

int v[100][100],ncolumnas,nfilas;

int main(int argc,char*argv[]){

    pedirdatos();

    cout<<"El menor numero es: "<<menor(v,nfilas,ncolumnas)<<endl;

    system("pause");
    return 0;
}
void pedirdatos(){

    cout<<"Digite el numero de filas: "<<endl;
    cin>>nfilas;
    cout<<"Digite el numero de columnas: "<<endl;
    cin>>ncolumnas;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){

            printf("Ingrese el numero[%d][%d]: ",i,j);
            scanf(" %d", &v[i][j]);

        }
    }

}
int menor(int v[][100],int nfilas,int ncolumnas){

    int fila=0,menor=9999;

    cout<<"Digite un numero de fila para comprobar el menor elemento: "<<endl;
    cin>>fila;

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