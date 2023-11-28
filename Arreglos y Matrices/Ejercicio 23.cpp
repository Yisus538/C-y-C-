/*
7. Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada y si es
   igual a su matriz transpuesta.
*/
#include <iostream>
#include <stdlib.h>

int main(){

    int filas=0,columnas=0;
    char bandera= 'F';

    std::cout<<"Digite el numero de filas: "<<std::endl; std::cin>>filas;
    std::cout<<"Digite el numero de columanas: "<<std::endl; std::cin>>columnas;

    int matriz[filas][columnas];

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){

            std::cout<<"Digite un numero["<<i<<"]["<<j<<"]: "<<std::endl;
            std::cin>>matriz[i][j];

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

      std::cout<<"La matriz es simetrica."<<std::endl;

    }else{

        std::cout<<"La matriz no es simetrica."<<std::endl;
        
    }

    system("pause");
    return 0;
}