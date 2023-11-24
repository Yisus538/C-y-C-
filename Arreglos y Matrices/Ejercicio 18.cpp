/*
2. Realice un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.
*/
#include <iostream>
#include <stdlib.h>


int main(){

    int numero[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<3; i++){

       for(int j=0; j<3; j++){

         std::cout<<numero[i][j];

       }
      std::cout<<"\n";
    }
    std::cout<<"\nMostrando Diagonal Principal"<<std::endl;
    for(int i=0; i<3; i++){

       for(int j=0; j<3; j++){

         if(i==j){

            std::cout<<numero[i][j]<<std::endl;

         }

       }

    }

    system("pause");
    return 0;
}