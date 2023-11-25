/*
15. Desarrollar una funcion que determine si una matriz es simetrica o no.

- La matriz debe ser cuadrada.
*/
#include <iostream>
#include <stdlib.h>


void pedirdatos();
void simetria(int[][100],int,int);

int m[100][100],nfilas,ncolumnas;

int main(){

    pedirdatos();
    simetria(m,nfilas,ncolumnas);


    system("pause");
    return 0;
}

void pedirdatos(){

    std::cout<<"Digite el numero de filas: "<<std::endl;
    std::cin;  std::cin>>nfilas;

    std::cout<<"Digite el numero de columnas: "<<std::endl;
    std::cin>>ncolumnas;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){
            std::cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "<<std::endl;
            std::cin>>m[i][j];
        }
    }
}
void simetria(int m[][100],int nfilas,int ncolumnas){

    int contador=0;


 if(nfilas==ncolumnas){

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){
            if(m[i][j]==m[j][i]){
                contador++;
            }
        }
    }
 }

 if(contador == nfilas*ncolumnas){
     std::cout<<"La matriz es simetrica.\n"<<std::endl;
 }else{
     std::cout<<"La matriz no es simetrica. \n"<<std::endl;
 }

}