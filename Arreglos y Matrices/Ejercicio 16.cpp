/*
8. Hace un programa que lea 5 numeros en un arreglo, los copi a otro arreglo multiplicados por dos y muestre el segundo arreglo.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vector1[5]={0},vector2[5]={0};

    for(int i=0; i<5; i++){

      printf("Escribe el elemento %d: \n",i);
      scanf(" %d", &vector1[i]);

    }
    for(int i=0; i<5; i++){

      vector2[i]= vector1[i]*2;

    }

    printf("\nMostrando elementos del arreglo por 2: \n");
    
    for(int i=0; i<5; i++){

      printf("Vector[%d] = %d\n",i,vector2[i]);

    }

    system("pause");
    return 0;
}