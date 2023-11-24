/*
3. Rellenar un arreglo de 10 numeros enteros,posteriormente indicar cuales son pares y su direccion de
   memoria con punteros.
*/
#include <stdio.h>
#include <ctime>
#include <stdlib.h>


int main(int argc,char*argv[]){

    int numero[10],*ptr{numero};
    srand(time(NULL));

    for(int i = 0; i < 10; i++){

        *(ptr+i) = 1 + rand()%(10);

        if(*(ptr+i)%2==0){
            printf("EL numero %d es par y su posicion es %d\n",*(ptr+i),ptr+i);
        }
    }

    

    system("pause");
    return 0;
}