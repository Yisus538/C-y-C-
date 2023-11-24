/*
5. Hacer 2 estructuras una llamada promeido que tendra los sig cammpos: n1,n2,n3; y otro llamada alumno que tendra los
   siguientes miembros: nombre,sexo,edad; hacer que la estructura alumno, luego pedir todos los datos para un alumno,
   luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
*/
#include <iostream>
#include <stdlib.h>

//Estructuras
struct Promedio{

    int nota1,nota2,nota3;

}promedio;
struct Alumnos{
    
    char Nombre[20];
    char Sexo[20];
    int edad;

}alumnos;

int main(int argc,char*argv[]){


    fflush(stdin);
    std::cout<<"Ingrese el nombre: "<<std::endl;
    std::cin.getline(alumnos.Nombre,20,'\n');
    std::cout<<"Ingrese el sexo de la persona: "<<std::endl;
    std::cin.getline(alumnos.Sexo,20,'\n');
    std::cout<<"Ingrese la edad: "<<std::endl;
    std::cin>>alumnos.edad;


    std::cout<<"\n\nIngrese nota 1: "<<std::endl;
    std::cin>>promedio.nota1;
    std::cout<<"Ingrese nota 2: "<<std::endl;
    std::cin>>promedio.nota2;
    std::cout<<"Ingrese nota 3: "<<std::endl;
    std::cin>>promedio.nota3;
    
    std::cout<<"\n\nDatos y Promedio de Alumno: "<<std::endl;
    std::cout<<"Nombre: "<<alumnos.Nombre<<std::endl;
    std::cout<<"Edad: "<<alumnos.edad<<std::endl;
    std::cout<<"Sexo: "<<alumnos.Sexo<<std::endl;
    std::cout<<"Promedio: "<<((promedio.nota1+promedio.nota2+promedio.nota3)/3)<<std::endl;


    system("pause");
    return 0;
}