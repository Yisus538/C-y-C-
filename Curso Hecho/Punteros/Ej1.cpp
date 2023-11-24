/*
1. Comprobar si un numero es par o impar y señalar la posicion de memoria donde se encuentra guardado el numero.
   Con punteros.
*/
#include <iostream>
#include <stdlib.h>


int main(int argc,char*argv[]){

    int numero;
    int* dir_numero{&numero};

    std::cout<<"Ingrese un numero: "<<std::endl;
    std::cin>>*dir_numero;

    if(*dir_numero%2==0){
        std::cout<<"El numero es: "<<*dir_numero<<std::endl;
        std::cout<<"Su direccion de memoria es: "<<dir_numero<<std::endl;
    }else{
        std::cout<<"El numero no es par: "<<*dir_numero<<std::endl;
        std::cout<<"Su direccion de memoria es: "<<dir_numero<<std::endl;
    }


    system("pause");
    return 0;
}
