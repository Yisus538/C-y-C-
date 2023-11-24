//1. Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicacion.
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int numero=0;

    do{
      cout<<"Dame un numero entero del 1-10: "; cin>>numero;

    }while((numero<1) || (numero>10));

    for(int i=1; i<=20; i++){
      cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }
    system("pause");
    return 0;
}