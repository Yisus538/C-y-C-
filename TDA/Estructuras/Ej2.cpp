/*
2. Hacer una estructura llamada alumnos, en la cual se tendran los siguientes campos: nombre,edad,promedio
   pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente
  imprimir los datos del alumno
*/
#include <iostream>
#include <string.h>


struct alumnos{

    char Nombre[20];
    int edad;
    float promedio;

}Alumnos[3];

int main(int argc,char*argv[]){

    float max;
    int posicion;

    for(int i = 0; i < 3; i++){

        std::cout<<i+1<<" Nombre: "<<std::endl;
        std::cin.getline(Alumnos[i].Nombre,20,'\n');
        std::cout<<i+1<<" Edad: "<<std::endl;
        std::cin>>Alumnos[i].edad;
        std::cout<<i+1<<" Promedio: "<<std::endl;
        std::cin>>Alumnos[i].promedio;

        if(Alumnos[i].promedio>max){
            max = Alumnos[i].promedio;
            posicion = i;
        }
    }

    std::cout<<"\n\nDatos de la Persona: "<<std::endl;
    std::cout<<"Nombre: "<<Alumnos[posicion].Nombre<<std::endl;
    std::cout<<"Edad: "<<Alumnos[posicion].edad<<std::endl;
    std::cout<<"Promedio: "<<Alumnos[posicion].promedio<<std::endl;

    return 0;
}