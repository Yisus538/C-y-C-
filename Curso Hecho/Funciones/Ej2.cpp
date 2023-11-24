/*
2. Escriba un funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
   La funcion debera ser capaz de elevar al cuadrado numeros flotantes.
*/
#include <iostream>
#include <math.h>
#include <stdlib.h>


//Funciones
void datos();
void al_cuadrado(float x);

//Variable Global
float num1=0;

int main(int argc,char*argv[]){

    datos();
    al_cuadrado(num1);


    system("pause");
    return 0;
}

void datos(){

   std::cout<<"Ingrese un numero: "<<std::endl; std::cin>>num1;


}
void al_cuadrado(float x){

    std::cout<<"El resultado es: "<<pow(x,2)<<std::endl;



}