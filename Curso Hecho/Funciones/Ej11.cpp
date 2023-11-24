/*
11. Realice un funcion que tome como parametros un vector de numeros enteros
y devuelva la suma de sus elementos.
*/
#include <iostream>
#include <stdlib.h>


int suma(int[],int);

int main(int argc,char*argv[]){

    const int tam = 5;
    int vec[tam]= {1,2,3,4,5};

    std::cout<<"El resultado de la suma es: "<<suma(vec,tam)<<std::endl;

    system("pause");
    return 0;
}

int suma(int vec[],int tam){

    int suma= 0;

    for(int i=0; i<tam; i++){
        suma += vec[i];
    }

    return suma;

}