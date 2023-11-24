/*
7. Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada y si es
   igual a su matriz transpuesta.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int matriz[100][100]={0},filas=0,columnas=0;
    char bandera= 'F';

    cout<<"Digite el numero de filas: "<<endl; cin>>filas;
    cout<<"Digite el numero de columanas: "<<endl; cin>>columnas;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){

            cout<<"Digite un numero["<<i<<"]["<<j<<"]: "<<endl;
            cin>>matriz[i][j];

        }
    }

    if(filas==columnas){
      for(int i=0; i<filas; i++){
          for(int j=0; j<columnas; j++){
              if(matriz[i][j]==matriz[j][i]){
                bandera = 'V';
              }
          }

      }
    }
    if(bandera == 'V'){

      cout<<"La matriz es simetrica."<<endl;

    }else{

        cout<<"La matriz no es simetrica."<<endl;
        
    }

    system("pause");
    return 0;
}