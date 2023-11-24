/*
3/ Hacer una matriz de tipo entera de 2x2, llenarla de numeros y luego copiar todo su contenido hacia otra matriz.
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc,char*argv[]){

    int vector1[2][2]={{1,2},{3,4}};
    int vector2[2][2]={};

    for(int i=0; i<2; i++){

        for(int j=0; j<2; j++){

           vector2[i][j]= vector1[i][j];
           
        }
    }
    for(int i=0; i<2; i++){

        for(int j=0; j<2; j++){

           cout<<vector2[i][j];
           
        }
        cout<<"\n";
    }

    getch();
    return 0;
}