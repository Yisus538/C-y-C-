/*
4. Escriba un programa que devuelva la parte fraccionaria de cualquier numero introducido por el usuario
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

//Prototipos de Funciones

void pedirdatos();
float partefra(float n);

float numero=0;

int main(int argc,char*argv[]){

    pedirdatos();
  

    cout<<"El resultado es: "<<partefra(numero)<<endl;


    system("pause");
    return 0;
}

void pedirdatos(){

    cout<<"Digite su numero: "<<endl;
    cin>>numero;

}
float partefra(float n){

    int entero=n;

    float resultado= n - entero;

    return resultado;

}