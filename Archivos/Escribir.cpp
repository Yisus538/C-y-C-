#include <iostream>
#include <fstream>
#include <stdlib.h>

int main(){

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
    system("pause");
    return 0;
}