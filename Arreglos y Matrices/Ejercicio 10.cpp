/*Escriba un porograma que defina un vector de numeros y calcule la multiplicacion de sus elementos*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(){

    int vector[]= {1,8,3,5,5},multi=1;

    for(int i=0; i<5; i++){
       
       multi *= vector[i];
    }
    std::cout<<"El resultado de la multiplicacion es de: "<<multi<<std::endl;

    system("pause");
    return 0;
}
