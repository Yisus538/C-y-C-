//Arreglos dinamicos New Delete.
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Funciones
void Pedirdatos(int *,int);
void Mostrar(int *,int);

int main(int argc,char*argv[]){

    int *ptr,tam;

    Pedirdatos(ptr,tam);
    Mostrar(ptr,tam);
    
    
    
    delete[] ptr;
    system("pause");
    return 0;
}
void Pedirdatos(int *ptr,int tam){

    printf("Ingrese el tamaño de la lista: \n");
    scanf(" %d", &tam);

    ptr = new int[tam];

    for(int i = 0; i < tam; i++){

        printf("Ingrese un numero: \n");
        scanf(" %d", *(ptr+i));

    }

    
}
void Mostrar(int *ptr,int tam){

    for (int i = 0; i < tam; i++){
        printf("Vector[%d] = %d\n",i,*(ptr+i));
    }

}