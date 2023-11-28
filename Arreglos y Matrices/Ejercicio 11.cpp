/*
3. Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numeros
del vector con sus indices asociados.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vector[100]={0},n=0;

    printf("Digite el numero de elementos que va a tener el arrays: \n");
    scanf(" %d", &n);


    for(int i=0; i<n; i++){

       printf("Escriba un vector de numeros enteros: \n");
       scanf(" %d", &vector[i]);
       printf("\n");

    }
    for(int i=0; i<n; i++){

      printf("El vector[%d] = %d\n", i, vector[i]);

    }

    system("pause");
    return 0;
}