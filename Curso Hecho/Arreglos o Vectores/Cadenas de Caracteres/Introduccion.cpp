//Cadenas de Caracteres
#include <iostream>
#include <string.h>
#include <cstdlib>

int main(int argc,char*argv[]){
    /*
     char palabras[] = "Manuel";
     char palabras2[] = {'M','a','n','u','e','l'};

     cout<<palabras<<endl;
     cout<<palabras2<<endl;
    */
    char nombre[20]={" "};

    std::cout<<"Escriba su nombre: "<<std::endl;
    std::cin.getline(nombre,20,'\n');

    std::cout<<nombre<<std::endl;

    system("pause");
    return 0;
}