//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz
#include <iostream>
#include <stdlib.h>
using namespace std;

void mostrarMatriz(int m[][3],int,int);
void cuadrado(int m[][3],int,int);
void mostraelevada(int m[][3],int,int);

int main(int argc,char*argv[]){

    const int NFilas= 2;
    const int NColumnas = 3;
    int m[NFilas][NColumnas]= {{1,2,3},{4,5,6}};

    mostrarMatriz(m,NFilas,NColumnas);
    cuadrado(m,NFilas,NColumnas);
    mostraelevada(m,NFilas,NColumnas);
    
    system("pause");
    return 0;
}
void mostrarMatriz(int m[][3],int nfilas,int ncolumnas){

    cout<<"\tMostrando Matriz Original. "<<endl;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void cuadrado(int m[][3],int nfilas,int ncolumnas){
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){
            m[i][j] *= m[i][j];
        }
        
    }
}
void mostraelevada(int m[][3],int nfilas,int ncolumnas){

    cout<<"\tMostrando Matriz Elevada al Cuadrado. "<<endl;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncolumnas; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}