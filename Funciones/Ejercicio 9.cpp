/*
4. Escriba un programa que devuelva la parte fraccionaria de cualquier numero introducido por el usuario
*/
#include <iostream>
#include <stdlib.h>

//Prototipos de Funciones

void pedirdatos(float);
float partefra(float);



int main(){

    float numero=0;
    pedirdatos(numero);
  

    std::cout<<"El resultado es: "<<partefra(numero)<<std::endl;


    system("pause");
    return 0;
}

void pedirdatos(float numero){

    std::cout<<"Digite su numero: "<<std::endl;
    std::cin>>numero;

}
float partefra(float n){

    int entero=n;

    float resultado= n - entero;

    return resultado;

}