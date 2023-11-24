//Longitud de cadena de caracteres - Funcionm strlen()

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc,char*argv[]){

    char palabra[]= "Hello";
    int longitud = 0;

    longitud = strlen(palabra);

    cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;


    system("pause");
    return 0;
}