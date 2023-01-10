/*
2. Hacer una estructura llamada alumnos, en la cual se tendran los siguientes campos: nombre,edad,promedio
   pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente
  imprimir los datos del alumno
*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

struct alumnos{

    char Nombre[20];
    int edad;
    float promedio;

}Alumnos[3];

int main(int argc,char*argv[]){

    float max;
    int posicion;

    for(int i = 0; i < 3; i++){

        cout<<i+1<<" Nombre: "<<endl;
        cin.getline(Alumnos[i].Nombre,20,'\n');
        cout<<i+1<<" Edad: "<<endl;
        cin>>Alumnos[i].edad;
        cout<<i+1<<" Promedio: "<<endl;
        cin>>Alumnos[i].promedio;

        if(Alumnos[i].promedio>max){
            max = Alumnos[i].promedio;
            posicion = i;
        }
    }

    cout<<"\n\nDatos de la Persona: "<<endl;
    cout<<"Nombre: "<<Alumnos[posicion].Nombre<<endl;
    cout<<"Edad: "<<Alumnos[posicion].edad<<endl;
    cout<<"Promedio: "<<Alumnos[posicion].promedio<<endl;


    getch();
    return 0;
}