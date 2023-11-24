/*
11. Hacer una estructura llamamda alumno, en la cual se tendran los siguentes campos:
    nombre,edad,promedio, pedir datos al usuario para 3 alumos, comprobar cual de los
    3 tiene el mejor promedio y posteriormente imrpimir los datos del alumno.
*/
#include <iostream>
#include <stdlib.h>

struct Alumno{
    char Nombre[30];
    int edad;
    float promedio;
}*puntero_usuario;
int pos = 0;

static void Pedirdatos(Alumno*,int);
static void Mostrar(Alumno*,int);

int main(int argc,char*argv[]){

    int max;

    Pedirdatos(puntero_usuario,max);
    Mostrar(puntero_usuario,max);

    system("pause");
    return 0;
}
static void Pedirdatos(Alumno* puntero_usuario,int max){

    for(int i = 0; i < 3; i++){
        std::cout<<"Ingrese su nombre: "<<std::endl; std::cin.getline((puntero_usuario+i)->Nombre,30,'\n');
        std::cout<<"Ingrese su edad: "<<std::endl; std::cin>>(puntero_usuario+i)->edad;
        std::cout<<"Ingresa tu promedio: "<<std::endl; std::cin>>(puntero_usuario+i)->promedio;

        if((puntero_usuario+i)->promedio>max){
            max =(puntero_usuario+i)->promedio;
            pos = i;
        }
    }
}
static void Mostrar(Alumno* puntero_usuario,int max){
    std::cout<<"\n\nDatos de Alumno"<<std::endl;
    std::cout<<"Nombre: "<<(puntero_usuario+pos)->Nombre<<std::endl;
    std::cout<<"Edad: "<<(puntero_usuario+pos)->edad<<std::endl;
    std::cout<<"Promedio: "<<max<<std::endl;
}