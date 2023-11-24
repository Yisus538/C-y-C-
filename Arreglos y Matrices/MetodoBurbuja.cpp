//Metodo burbuja
#include <iostream>
#include <stdlib.h>

int main(){

    int numero[] = {4,1,2,3,5};
    int i,j,aux;

    //Algoritmo de metodo burbuja.
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(numero[j] > numero [j+1]){
                aux = numero [j];
                numero[j] = numero[j+1];
                numero[j+1] = aux;
            }
        }
    }
    std::cout<<"Orden Ascendente: "<<std::endl;

    for(i=0; i<5; i++){
        std::cout<<numero[i]<<std::endl;
    }
    std::cout<<"Orden Descendente: "<<std::endl;
    for(i=4; i>=0; i--){
        std::cout<<numero[i]<<std::endl;
    }

    system("pause");
    return 0;
}