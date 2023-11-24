//Estructura Basica en c++
#include <iostream>
#include <stdlib.h>


struct Persona{

    char nombre[20];
    int edad;

}persona1 = {"Yisus",19},persona2 = {"Manu",17};

int main(int argc,char*argv[]){
    
    std::cout<<"Nombre1: "<<persona1.nombre<<std::endl;
    std::cout<<"Edad: "<<persona1.edad<<std::endl;
    std::cout<<"Nombre2: "<<persona2.nombre<<std::endl;
    std::cout<<"Edad: "<<persona2.edad<<std::endl;

    system("pause");
    return 0;
}