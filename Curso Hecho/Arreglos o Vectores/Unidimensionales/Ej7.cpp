/*
7. Realiza un programa que definma dos vectoress de caracteres y despues almacene
el contenido de ambos vectores en un nuevo vector, situando en primer lugar los 
elementos del primer verctor seguido por los elementos del segundo vector.
Muestre el contenido del nuevo vector en la salida estandar.
*/
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    char letra1[]={'a','b','c','d','e'};
    char letra2[]={'f','g','h','i','j'};
    char letra3[10]={};

    for(int i=0; i<5; i++){

       letra3[i] = letra1[i];

    }
    for(int i=5; i<10; i++){

       letra3[i] = letra2[i-5];

    }
    for(int i=0; i<10; i++){

     printf("Letra = %c\n",letra3[i]);

    }

    system("pause");
    return 0;
}