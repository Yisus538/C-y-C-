//Longitud de cadena de caracteres - Funcionm strlen()

#include <iostream>
#include <stdlib.h>
#include <string.h>


int main(int argc,char*argv[]){

    char palabra[]= "Hello";
    int longitud = 0;

    longitud = strlen(palabra);

    std::cout<<"Numero de elementos de la cadena es: "<<longitud<<std::endl;


    system("pause");
    return 0;
}