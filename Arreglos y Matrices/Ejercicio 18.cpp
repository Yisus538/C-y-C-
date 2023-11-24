/*
2. Realice un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int arg,char*argv[]){

    int numero[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<3; i++){

       for(int j=0; j<3; j++){

         cout<<numero[i][j];

       }
      cout<<"\n";
    }
    cout<<"\nMostrando Diagonal Principal"<<endl;
    for(int i=0; i<3; i++){

       for(int j=0; j<3; j++){

         if(i==j){

            cout<<numero[i][j]<<endl;

         }

       }

    }

    system("pause");
    return 0;
}