/*
1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena,
y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main(){

    char cadena[100] = "";
    //int longitud = 0;

    std::cout<<"Escriba una cadena de texto: "<<std::endl; 
    std::cin.getline(cadena,100,'\n');

    /*
    longitud = strlen(cadena);

    if(longitud>10){
        std::cout<<"Su longitud es de: "<<longitud<<endl;
        std::cout<<cadena<<endl;
    }else{
        std::cout<<"No supero las 10 para mostrarse en pantalla."<<endl;
    }
    */
   if(strlen(cadena)>10){
     std::cout<<cadena<<std::endl;
   }else{
     std::cout<<"No supero las 10 para mostrarse en pantalla."<<std::endl;
   }


    system("pause");
    return 0;
}