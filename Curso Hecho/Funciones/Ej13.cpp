/*
13. Realiza una funcion que tome como parametros un vector de numero y su tamaño y cambie el signo de los elementos del
vector.
*/
#include <iostream>
#include <stdlib.h>


void pedirDatos();
void arrays(int[],int);
void mostrar(int[],int);


int vec[100],tam=0;

int main(int argc,char*argv[]){

    pedirDatos();
    arrays(vec,tam);
    mostrar(vec,tam);


    system("pause");
    return 0;
}
void pedirDatos(){


    std::cout<<"Ingrese el tamaño del vector: "<<std::endl;
    std::cin>>tam;

    for(int i=0; i<tam; i++){

        std::cout<<i+1<<". Digite un numero: "<<std::endl;
        std::cin>>vec[i];

    }

}
void arrays(int vec[],int tam){

    for(int i=0; i<tam; i++){
 
        vec[i] *= -1;

    }
}
void mostrar(int vec[],int tam){

    for(int i=0; i<tam; i++){

        std::cout<<vec[i]<<" "<<std::endl;

    }
}