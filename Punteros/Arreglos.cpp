//Correspondecia entre arreglo y puntero.
#include <iostream>
#include <stdlib.h>


int main(){

    int numero[] = {1,2,3,4,5};
    int* ptr{numero};

    for(int i = 0; i < 5 ; i++){
        std::cout<<"El numero es: "<<*(ptr+i)<<std::endl;
        std::cout<<"Su posicion es: "<<ptr+i<<std::endl;
    }



    system("pause");
    return 0;
}