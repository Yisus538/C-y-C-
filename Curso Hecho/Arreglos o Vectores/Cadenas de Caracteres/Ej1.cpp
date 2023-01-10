/*
1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena,
y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc,char*argv[]){

    char cadena[100] = "";
    //int longitud = 0;

    cout<<"Escriba una cadena de texto: "<<endl; 
    cin.getline(cadena,100,'\n');

    /*
    longitud = strlen(cadena);

    if(longitud>10){
        cout<<"Su longitud es de: "<<longitud<<endl;
        cout<<cadena<<endl;
    }else{
        cout<<"No supero las 10 para mostrarse en pantalla."<<endl;
    }
    */
   if(strlen(cadena)>10){
     cout<<cadena<<endl;
   }else{
     cout<<"No supero las 10 para mostrarse en pantalla."<<endl;
   }


    system("pause");
    return 0;
}