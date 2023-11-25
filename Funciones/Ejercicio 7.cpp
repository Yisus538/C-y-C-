/*
2. Escriba un funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
   La funcion debera ser capaz de elevar al cuadrado numeros flotantes.
*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
//Funciones
void datos(float);
void al_cuadrado(float);

//Variable Global


int main(){

    float num1=0;

    datos(num1);
    al_cuadrado(num1);


    system("pause");
    return 0;
}

void datos(float num1){

   std::cout<<"Ingrese un numero: "<<std::endl; std::cin>>num1;


}
void al_cuadrado(float x){

    std::cout<<"El resultado es: "<<pow(x,2)<<std::endl;



}