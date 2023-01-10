/*
5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz
traspuesta es aquella en la que la columna i era la fila i de la matriz original.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int matriz[3][3]={0};


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cout<<"Escriba el elemento del Vector["<<i<<"]["<<j<<"]: "<<endl;
            cin>>matriz[i][j];
     
        }
    }

    cout<<"\tMatriz Original\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cout<<matriz[i][j];

        }
        cout<<"\n";
    }

    cout<<"\tTranspuesta\n";

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cout<<matriz[j][i];
     
        }
        cout<<"\n";
    }


    system("pause");
    return 0;
}