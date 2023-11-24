// Agregar o concatenar una cadena con otra - Funcion strcat()

#include <iostream>
#include <stdlib.h>
#include <string.h>

int main(int argc,char*argv[]){

    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo.";
    char cad3[30] = "";

    strcpy(cad3,cad1); //cadena 3 = esto es una cadena.

    strcat(cad3,cad2); //cadedena 3 = esto es una cadena de ejemplo.

    std::cout<<cad3<<std::endl;


    system("pause");
    return 0;
}