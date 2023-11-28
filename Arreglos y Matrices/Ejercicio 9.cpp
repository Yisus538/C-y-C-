/*Escriba un porograma que defina un vector de numeros y calcule la suma de sus elementos*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vector[]={1,2,3,4,5},suma=0;

    for(int i=0; i<5; i++){

      suma += vector[i];

    }
    printf("El resultado de la suma es de: %d\n",suma);

    system("pause");
    return 0;
}