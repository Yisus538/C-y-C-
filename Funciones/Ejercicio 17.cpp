/*
12. Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector esta ordenado
crecientemente. Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento
del vector es mayor o igual que el elemento que le precede en el vector.
*/
#include <iostream>
#include <stdlib.h>


void pedirdato();
void orden(int[],int);

int vec[100],tam=0;

int main(){

    pedirdato();
    orden(vec,tam);


    system("pause");
    return 0;
}
void pedirdato(){

    std::cout<<"Digite el numero de elementos del vector: "<<std::endl;
    std::cin>>tam;

    for(int i=0; i<tam; i++){
        std::cout<<i+1<<". Digite un numero: "<<std::endl;
        std::cin>>vec[i];
    }

}
void orden(int vec[], int tam){

    char band= 'F';

    int i=0 ;

    while((band=='F') && (i<tam-1)){
        if(vec[i]>vec[i+1]){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        std::cout<<"El array esta ordenado Crecientemente. "<<std::endl;
    }else{
        std::cout<<"EL arreglo NO esta ordenado. "<<std::endl;
    }

}