/*
1. Hacer una estructura llamada corredor, en la cual se tendra los siguientes campos: Nombre,edad,club, pedir datos al usuario para un corredor
   y asi categoria de competicion:

    Juvenil <= 18 años
    Señor <= 40 años
    Veterano > 40 años

    Posteriormente imprimir todos los datos del corredor, incluida su categoria de competencia.

*/
#include <iostream>
#include <string.h>
#include <stdlib.h>

struct corredor{

    char Nombre[20];
    int edad;
    char sexo[20];
    char Club[30];

}corredor1;

int main(){

    char categoria[20];

    std::cout<<"Ingrese el nombre: "<<std::endl;
    std::cin.getline(corredor1.Nombre,20,'\n');
    std::cout<<"Ingresa el sexo: "<<std::endl;
    std::cin.getline(corredor1.sexo,20,'\n');
    std::cout<<"Ingrese el nombre de su club: "<<std::endl;
    std::cin.getline(corredor1.Club,30,'\n');
    std::cout<<"Ingrese la edad: "<<std::endl;
    std::cin>>corredor1.edad;

    if(corredor1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }else if(corredor1.edad <= 40){
        strcpy(categoria,"Señor");
    }else{
        strcpy(categoria,"Veterano");
    }

    std::cout<<"\n\nDatos del Corredor\n";
    std::cout<<"Nombre: "<<corredor1.Nombre<<std::endl;
    std::cout<<"Edad: "<<corredor1.edad<<std::endl;
    std::cout<<"Sexo: "<<corredor1.sexo<<std::endl;
    std::cout<<"Club: "<<corredor1.Club<<std::endl;
    std::cout<<"Categoria: "<<categoria<<std::endl;



    system("pause");
    return 0;
}