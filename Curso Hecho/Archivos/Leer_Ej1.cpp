/*
Ejercicio 1: Realiza un programa que pida el nombre o ubicacion de un archivo y a continuaciond de lectura a todo el archivo.
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void Escribir();
void Leer();

int main(int argc,char**argv){

    ifstream file;
    string text;

    Escribir();
    Leer();

    system("pause");
    return 0;
}
void Escribir(){

    ofstream file;
    string Nombre_archivo;

    cout<<"Ingrese el nombre del archivo: "<<endl; getline(cin,Nombre_archivo);

    file.open(Nombre_archivo.c_str(),ios::out);

    if(file.fail()){
        cout<<"El archivo no se a podido abrir."<<endl;
        exit(EXIT_SUCCESS);
    }

    file<<"Creando archivo de texto."<<endl;


    file.close();

}
void Leer(){

    ifstream file;
    string Nombre_Archivo,text;

    
    cout<<"Ingrese el nombre del archivo: "<<endl; getline(cin,Nombre_Archivo);
    file.open(Nombre_Archivo.c_str(),ios::in);

    if(file.fail()){
        cout<<"El archivo no se a podido leer."<<endl;
        exit(EXIT_FAILURE);
    }

    while(!file.eof()){
        getline(file,text);
        cout<<text<<endl;
    }

    file.close();
}