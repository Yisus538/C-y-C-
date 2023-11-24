/*
3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los
   datos del empleado con mayor y menor salario.
*/
#include <iostream>
#include <stdlib.h>

struct Empleados{

    char Nombre[20];
    float salario;

}Empleados[100];

int main(int argc,char*argv[]){

    int tam,max,min,PMayor,PMenor = 999999;

    std::cout<<"Ingrese la cantidad de empleados: "<<std::endl;
    std::cin>>tam;

    for(int i = 0; i < tam; i++){

        fflush(stdin);
        std::cout<<"Nombre: "<<std::endl;
        std::cin.getline(Empleados[i].Nombre,20,'\n');
        std::cout<<"Salario: "<<std::endl;
        std::cin>>Empleados[i].salario;

        if(Empleados[i].salario>max){
            max = Empleados[i].salario;
            PMayor = i;
        }else if(Empleados[i].salario < min){
            min = Empleados[i].salario;
            PMenor = i;
        }
        std::cout<<"\n";

    }
    std::cout<<"\n\nDATOS DEL EMPLEADO MAYOR"<<std::endl;
    std::cout<<"Nombre: "<<Empleados[PMayor].Nombre<<std::endl;
    std::cout<<"Salario: "<<Empleados[PMayor].salario<<std::endl;

    std::cout<<"\n\nDATOS DEL EMPLEADO MENOR"<<std::endl;
    std::cout<<"Nombre: "<<Empleados[PMenor].Nombre<<std::endl;
    std::cout<<"Salario: "<<Empleados[PMenor].salario<<std::endl;

    system("pause");
    return 0;
}