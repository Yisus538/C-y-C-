//1. Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicacion.
#include <iostream>
#include <stdlib.h>

int main(){
    int numero=0;

    do{
      std::cout<<"Dame un numero entero del 1-10: "; std::cin>>numero;

    }while((numero<1) || (numero>10));

    for(int i=1; i<=20; i++){
      std::cout<<numero<<" * "<<i<<" = "<<numero*i<<std::endl;
    }
    system("pause");
    return 0;
}

 