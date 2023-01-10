/*
2. Determina si un numero es primo o no, con punteros y indicar su direccion de memoria.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc,char*argv[]){

    int primo,*dir_primo = &primo,cont = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>*dir_primo;

    for(int i = 1; i < *dir_primo; i++){
        if(*dir_primo%i==0){
            cont++;
        }
    }

    if(cont > 2){
        cout<<"Este numero no es primo: "<<*dir_primo<<endl;
        cout<<"Su direccion de memoria es: "<<dir_primo<<endl;
    }else{
        cout<<"Este numero es primo: "<<*dir_primo<<endl;
        cout<<"Su direccion de memoria es: "<<dir_primo<<endl;
    }

    system("pause");
    return 0;
}