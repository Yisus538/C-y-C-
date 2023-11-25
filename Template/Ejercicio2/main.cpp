#include <iostream>
#include "ordenar.h"


const int TAM = 5;
template <typename T> void pedirdatos(T*);
template <typename T> void mostrarArreglo(T*);

int main(){

    int* ptr{new int[TAM]};
    pedirdatos(ptr);

    
    ordenarAscendente(ptr,TAM);
    mostrarArreglo(ptr);

    ordenarDescendente(ptr,TAM);
    mostrarArreglo(ptr);

    delete[] ptr;
    return 0;
}
template <typename T> void pedirdatos(T* array){
    for(int i = 0; i < TAM; i++){
        std::cout<<"Digite un elemento["<<i<<"]: "<<std::endl;
        std::cin>>array[i];
    }
}
template <typename T> void mostrarArreglo(T* array){
    for(int i = 0; i < TAM; i++){
        std::cout<<"Elemento ["<<i<<"]: "<<array[i]<<std::endl;
    }
} 