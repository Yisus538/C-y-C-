/*
4. Rellenar un arreglo con n numeros,posteriormente utilizar punteros y determinar el menor numero.
*/
#include <stdio.h>
#include <stdlib.h>


int main(){

    int tam,*ptr,menor{9999};

    printf("Ingrese el tamaño del arreglo: \n");
    scanf(" %d", &tam);

    ptr = (int *)malloc(sizeof(int)*tam);

    for(int i = 0; i < tam; i++){
        printf("Ingrese un numero: ");
        scanf(" %d", ptr+i);

        if(*(ptr+i)<menor){
            menor = *(ptr+i);
        }
    }
    printf("El menor numero es: %d\n",menor);


    free(ptr);
    system("pause");
    return 0;
}