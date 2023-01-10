/*
15. Desarrollar una funcion que determine si una matriz es simetrica o no.

- La matriz debe ser cuadrada.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirdatos();
void simetria(int m[][100],int,int);

int m[100][100],nfilas,ncolumnas;

int main(int argc,char*argv[]){

    pedirdatos();
    simetria(m,nfilas,ncolumnas);


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
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "<<endl;
            cin>>m[i][j];
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
     cout<<"La matriz es simetrica.\n"<<endl;
 }else{
     cout<<"La matriz no es simetrica. \n"<<endl;
 }

}