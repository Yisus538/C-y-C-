/*
1. Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parrametros, multiplique estos dos numeros y despliegue el resultado
*/

#include <iostream>
#include <stdlib.h>



//Prototipo de Funcion

void pedirDatos();
void mult(float x, float y);
//Variables Globales

float num1=0, num2=0;

int main(int argc,char*argv[]){

    pedirDatos();
    mult(num1,num2);

    system("pause");
    return 0;
}
void pedirDatos(){

   std::cout<<"Ingrese dos numeros: "<<std::endl;
   std::cin>>num1>>num2;

    
}
void mult(float x, float y){

    std::cout<<"La multiplicacione es: "<<num1*num2<<std::endl;
}


