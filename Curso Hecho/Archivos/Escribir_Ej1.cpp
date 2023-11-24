/*
Ejercicio 1: Realice un programa que pida el nombre de un archivo de texto y a continuacion permita agregar tantas
             frases como el usuario decida poner.
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>


int main(int argc,char** argv){

    std::ofstream file;
    std::string Nombre_archivo,frase;
    char opc = ' ';

    std::cout<<"Ingrese el nombre del archivo: "<<std::endl; getline(std::cin,Nombre_archivo);

    file.open(Nombre_archivo.c_str(),std::ios::out);

    if(file.fail()){
        std::cout<<"El archivo no se a podido abrir."<<std::endl;
        exit(EXIT_SUCCESS);
    }

    do{
        std::cout<<"Ingrese la frase: "<<std::endl;
        getline(std::cin,frase);
        file<<frase<<std::endl;

        std::cout<<"Desea seguir escribiendo?(s/n): "<<std::endl;
        std::cin>>opc;
    }while(opc == 's' || opc == 'S');


    file.close();
    system("pause");
    return 0;
}