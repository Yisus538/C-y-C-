/*
2. Determina si un numero es primo o no, con punteros y indicar su direccion de memoria.
*/
#include <iostream>
#include <stdlib.h>


int main(){

    int primo,*dir_primo{&primo},cont = 0;

    std::cout<<"Ingrese un numero: "<<std::endl;
    std::cin>>*dir_primo;

    for(int i = 1; i < *dir_primo; i++){
        if(*dir_primo%i==0){
            cont++;
        }
    }

    if(cont > 2){
        std::cout<<"Este numero no es primo: "<<*dir_primo<<std::endl;
        std::cout<<"Su direccion de memoria es: "<<dir_primo<<std::endl;
    }else{
        std::cout<<"Este numero es primo: "<<*dir_primo<<std::endl;
        std::cout<<"Su direccion de memoria es: "<<dir_primo<<std::endl;
    }

    system("pause");
    return 0;
}