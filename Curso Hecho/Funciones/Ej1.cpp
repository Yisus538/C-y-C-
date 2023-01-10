/*
1. Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parrametros, multiplique estos dos numeros y despliegue el resultado
*/

#include <iostream>
#include <stdlib.h>
using namespace std;


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

   cout<<"Ingrese dos numeros: "<<endl;
   cin>>num1>>num2;

    
}
void mult(float x, float y){

    cout<<"La multiplicacione es: "<<num1*num2<<endl;
}


