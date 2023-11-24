/*
3. Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo debera ser el segundo
valor transmitido a la funcion
 */
#include <iostream>
#include <stdlib.h>

//FUNCIONES

void datos();
void funpot(int x, int y);

int num1=0, exponente=0;

int main(int argc,char*argv[]){

     datos();
     funpot(num1,exponente);

    system("pause");
    return 0;
}

void datos(){

    std::cout<<"Digite un numero: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Digite el exponente: "<<std::endl;
    std::cin>>exponente;

}
void funpot(int x, int y){

    long resultado = 1;

    for(int i=1; i<=y; i++){

       resultado *= x;

    }
    std::cout<<"EL resultado es: "<<resultado<<std::endl;

}