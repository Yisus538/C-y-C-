#include <iostream>
#include "Intercambio.h"

template <typename T> void ordenarAscendente(T *arreglo,int TAM){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j <(TAM-1);j++){
            if(arreglo[j] > arreglo[j+1]){
                intercambiar(arreglo[j],arreglo[j+1]);
            }
        }
    }
}
template <typename T> void ordenarDescendente(T *arreglo,int TAM){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j <(TAM-1);j++){
            if(arreglo[j] < arreglo[j+1]){
                intercambiar(arreglo[j],arreglo[j+1]);
            }
        }
    }
}