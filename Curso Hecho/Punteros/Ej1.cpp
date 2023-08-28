/*
1. Comprobar si un numero es par o impar y señalar la posicion de memoria donde se encuentra guardado el numero.
   Con punteros.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int numero;
    int *dir_numero{&numero};

    cout<<"Ingrese un numero: "<<endl;
    cin>>*dir_numero;

    if(*dir_numero%2==0){
        cout<<"El numero es: "<<*dir_numero<<endl;
        cout<<"Su direccion de memoria es: "<<dir_numero<<endl;
    }else{
        cout<<"El numero no es par: "<<*dir_numero<<endl;
        cout<<"Su direccion de memoria es: "<<dir_numero<<endl;
    }


    system("pause");
    return 0;
}
