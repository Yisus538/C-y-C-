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
using namespace std;

struct corredor{

    char Nombre[20];
    int edad;
    char sexo[20];
    char Club[30];

}corredor1;

int main(int argc,char*argv[]){

    char categoria[20];

    cout<<"Ingrese el nombre: "<<endl;
    cin.getline(corredor1.Nombre,20,'\n');
    cout<<"Ingresa el sexo: "<<endl;
    cin.getline(corredor1.sexo,20,'\n');
    cout<<"Ingrese el nombre de su club: "<<endl;
    cin.getline(corredor1.Club,30,'\n');
    cout<<"Ingrese la edad: "<<endl;
    cin>>corredor1.edad;

    if(corredor1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }else if(corredor1.edad <= 40){
        strcpy(categoria,"Señor");
    }else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\n\nDatos del Corredor\n";
    cout<<"Nombre: "<<corredor1.Nombre<<endl;
    cout<<"Edad: "<<corredor1.edad<<endl;
    cout<<"Sexo: "<<corredor1.sexo<<endl;
    cout<<"Club: "<<corredor1.Club<<endl;
    cout<<"Categoria: "<<categoria<<endl;



    system("pause");
    return 0;
}