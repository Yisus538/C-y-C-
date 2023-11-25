/*
7. Intercambiar el valor de 2 variables utilizando paso de parametros por referencia.
*/
#include <iostream>
#include <stdlib.h>


void intercambiar(int&,int&);

int main(){

    int num1=10, num2=15;


    std::cout<<"El valor de num1 es: "<<num1<<std::endl;
    std::cout<<"EL valor de num2 es: "<<num2<<std::endl;

    intercambiar(num1,num2);
   
    std::cout<<"El nuevo valor de num1 es: "<<num1<<std::endl;
    std::cout<<"EL nuevo valor de num2 es: "<<num2<<std::endl;

    system("pause");
    return 0;
}

void intercambiar(int& num1, int& num2){

    int aux=0;

    aux = num1;
    num1 = num2;
    num2= aux;


}