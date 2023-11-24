/*
2. Pedir al usuario una cadena de caracteres, almacenarla en un arrays y copiar
   todo su contenido hacia otro arrays de caracteres.
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>


int main(int argc,char*argv[]){

    char palabra[100]= "",palabra2[100]="";

    std::cout<<"Digite una cadena de texto: "<<std::endl;
    std::cin.getline(palabra,100,'\n');

    std::cout<<"La cadena es: "<<strcpy(palabra2,palabra)<<std::endl;


    system("pause");
    return 0;
}