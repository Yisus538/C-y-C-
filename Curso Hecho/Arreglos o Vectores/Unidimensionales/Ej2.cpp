/*Escriba un porograma que defina un vector de numeros y calcule la multiplicacion de sus elementos*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc,char*argv[]){

    int vector[]= {1,8,3,5,5},multi=1;

    for(int i=0; i<5; i++){
       
       multi *= vector[i];
    }
    cout<<"El resultado de la multiplicacion es de: "<<multi<<endl;


    system("pause");
    return 0;
}
