/*
Paso de parametros de tipo vector

Parametros de la funcion:
 void nombreDeFuncion(tipo nombreArreglo[],int tamañoArreglo)

 LLamada la funcion
    nombreDeFuncion(nombreArreglo, tamañoArreglo)

*/
//Cuadrados de los elementos del vector

#include <iostream>
#include <stdlib.h>


void cuadrado(int[],int);
void mostrar(int[],int);

int main(int argc,char*argv[]){

    const int TAM = 5;
    int vec[TAM] = {1,2,3,4,5};

    cuadrado(vec,TAM);
    mostrar(vec,TAM);


    system("pause");
    return 0;
}

void cuadrado(int vec[],int tam){
    for(int i=0; i<tam; i++){
        vec[i] *= vec[i];
    }
}
void mostrar(int vec[],int tam){

    for(int i=0; i<tam; i++){
        std::cout<<vec[i]<<" "<<std::endl;
    }

}












