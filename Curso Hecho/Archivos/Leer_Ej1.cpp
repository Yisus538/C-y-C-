/*
Ejercicio 1: Realiza un programa que pida el nombre o ubicacion de un archivo y a continuaciond de lectura a todo el archivo.
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>


void Escribir();
void Leer();

int main(int argc,char**argv){

    std::ifstream file;
    std::string text;

    Escribir();
    Leer();

    system("pause");
    return 0;
}
void Escribir(){

    std::ofstream file;
    std::string Nombre_archivo;

    std::cout<<"Ingrese el nombre del archivo: "<<std::endl; getline(std::cin,Nombre_archivo);

    file.open(Nombre_archivo.c_str(),std::ios::out);

    if(file.fail()){
        std::cout<<"El archivo no se a podido abrir."<<std::endl;
        exit(EXIT_SUCCESS);
    }

    file<<"Creando archivo de texto."<<std::endl;


    file.close();

}
void Leer(){

    std::ifstream file;
    std::string Nombre_Archivo,text;


    std::cout<<"Ingrese el nombre del archivo: "<<std::endl; getline(std::cin,Nombre_Archivo);
    file.open(Nombre_Archivo.c_str(),std::ios::in);

    if(file.fail()){
        std::cout<<"El archivo no se a podido leer."<<std::endl;
        exit(EXIT_FAILURE);
    }

    while(!file.eof()){
        getline(file,text);
        std::cout<<text<<std::endl;
    }

    file.close();
}