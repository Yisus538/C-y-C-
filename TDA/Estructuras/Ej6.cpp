/*
6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cual de todos
   tiene el mejor promedio y imprimir sus datos.
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>

//Estructuras
struct Promedio{

    int nota1,nota2,nota3,promedio;
};

struct Alumnos{

    char Nombre[20];
    char Sexo[20];
    int edad;
    struct Promedio notas[100];

}alumnos[100];

int main(int argc,char*argv[]){

    int nAlumnos,max,Pmax;

    std::cout<<"Ingrese el numero de alumnos: "<<std::endl;    
    std::cin>>nAlumnos;

    for(int i = 0; i < nAlumnos; i++){

        fflush(stdin);

        std::cout<<i+1<<" Ingrese el nombre: "<<std::endl;
        std::cin.getline(alumnos[i].Nombre,20,'\n');
        std::cout<<i+1<<" Ingrese el sexo del alumno: "<<std::endl;
        std::cin>>alumnos[i].edad;
        std::cout<<i+1<<" Ingrese la edad: "<<std::endl;
        std::cin>>alumnos[i].edad;

        std::cout<<"\n\nIngrese la primera nota: "<<std::endl;
        std::cin>>alumnos[i].notas[i].nota1;
        std::cout<<"Ingrese la segunda nota: "<<std::endl;
        std::cin>>alumnos[i].notas[i].nota2;
        std::cout<<"Ingrese la tercera nota: "<<std::endl;
        std::cin>>alumnos[i].notas[i].nota3;

        alumnos[i].notas[i].promedio =((alumnos[i].notas[i].nota1+alumnos[i].notas[i].nota2+alumnos[i].notas[i].nota3)/3);
    
        if(alumnos[i].notas[i].promedio>max){
            max = alumnos[i].notas[i].promedio;
            Pmax = i;
        }
           
    }

    std::cout<<"\n\nDatos y Mejor promedio de Alumno: "<<std::endl;
    std::cout<<"Nombre: "<<alumnos[Pmax].Nombre<<std::endl;
    std::cout<<"Edad: "<<alumnos[Pmax].edad<<std::endl;
    std::cout<<"Sexo: "<<alumnos[Pmax].Sexo<<std::endl;
    std::cout<<"Promedio: "<<alumnos[Pmax].notas[Pmax].promedio<<std::endl;

    system("pause");
    return 0;
}