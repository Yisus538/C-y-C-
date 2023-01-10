/*
8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int A[3][3]={{1,2,1},{2,1,1},{2,1,2}},B[3][3]={{3,2,1},{2,3,1},{1,1,3}},C[3][3]={0};

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
               C[i][j] += A[i][k]*B[k][j];
            }
        }
     }
     for(int i=0; i<3; i++){
         for(int j=0; j<3; j++){
             cout<<C[i][j]<<" ";
         }
         cout<<"\n";
     }

    system("pause");
    return 0;
}