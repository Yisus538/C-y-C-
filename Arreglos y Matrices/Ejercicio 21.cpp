/*
5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz
traspuesta es aquella en la que la columna i era la fila i de la matriz original.
*/
#include <iostream>
#include <stdlib.h>

int main(){

    int matriz[3][3]={0};


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            std::cout<<"Escriba el elemento del Vector["<<i<<"]["<<j<<"]: "<<std::endl;
            std::cin>>matriz[i][j];
     
        }
    }

    std::cout<<"\tMatriz Original\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            std::cout<<matriz[i][j];

        }
        std::cout<<"\n";
    }

    std::cout<<"\tTranspuesta\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            std::cout<<matriz[j][i];
     
        }
        std::cout<<"\n";
    }


    system("pause");
    return 0;
}