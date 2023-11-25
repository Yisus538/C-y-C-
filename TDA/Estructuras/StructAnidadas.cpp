//Estructuras anidadas
#include <iostream>
#include <string.h>
#include <stdlib.h>

struct info_direccion{

    char direccion[30];
    char ciudad[20];
    char provincia[20];

};
struct empleado{
    
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;

}empleado[2];


int main(){

    //Tomar Datos
    for(int i = 0; i < 2; i++){

        fflush(stdin);
        
        std::cout<<"Ingrese su nombre: "<<std::endl;
        std::cin.getline(empleado[i].nombre,20,'\n');
        std::cout<<"Ingrese su direccion: "<<std::endl;
        std::cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
        std::cout<<"Ingrese la ciudad donde vive: "<<std::endl;
        std::cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
        std::cout<<"Ingresa la provincia: "<<std::endl;
        std::cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
        std::cout<<"Ingresa el salario del empleado: "<<std::endl;
        std::cin>>empleado[i].salario;
        std::cout<<"\n";

    }

    //Imprimir datos
    for(int i = 0; i < 2; i++){

        std::cout<<"Nombre: "<<empleado[i].nombre<<std::endl;
        std::cout<<"Direccion: "<<empleado[i].dir_empleado.direccion<<std::endl;
        std::cout<<"Ciudad: "<<empleado[i].dir_empleado.ciudad<<std::endl;
        std::cout<<"Provincia: "<<empleado[i].dir_empleado.provincia<<std::endl;
        std::cout<<"Salario: "<<empleado[i].salario<<std::endl;

    }


    system("pause");
    return 0;
}