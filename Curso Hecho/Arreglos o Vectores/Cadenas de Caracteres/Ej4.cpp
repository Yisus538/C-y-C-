/*
4. Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra
   cadena para preguntarle al usuario sui nombre, por ultimo agregar el nombre al
   final de la primera cadena y mostrar el mensaje completo "Hola que tal(nombredelusuario)"
*/
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main(int argc,char*argv[]){

    char cad1[] = "Hola que tal ";
    char cad2[100] = "";

    cout<<"Escriba su nombre: "<<endl;
    cin.getline(cad2,100,'\n');

    strcat(cad1,cad2);

    cout<<cad1<<endl;
    
    system("pause");
    return 0;
}