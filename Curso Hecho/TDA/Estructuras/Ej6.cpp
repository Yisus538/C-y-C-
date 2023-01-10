/*
6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cual de todos
   tiene el mejor promedio y imprimir sus datos.
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

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

    cout<<"Ingrese el numero de alumnos: "<<endl;    
    cin>>nAlumnos;

    for(int i = 0; i < nAlumnos; i++){

        fflush(stdin);

        cout<<i+1<<" Ingrese el nombre: "<<endl;
        cin.getline(alumnos[i].Nombre,20,'\n');
        cout<<i+1<<" Ingrese el sexo del alumno: "<<endl;
        cin>>alumnos[i].edad;
        cout<<i+1<<" Ingrese la edad: "<<endl;
        cin>>alumnos[i].edad;

        cout<<"\n\nIngrese la primera nota: "<<endl;
        cin>>alumnos[i].notas[i].nota1;
        cout<<"Ingrese la segunda nota: "<<endl;
        cin>>alumnos[i].notas[i].nota2;
        cout<<"Ingrese la tercera nota: "<<endl;
        cin>>alumnos[i].notas[i].nota3;

        alumnos[i].notas[i].promedio =((alumnos[i].notas[i].nota1+alumnos[i].notas[i].nota2+alumnos[i].notas[i].nota3)/3);
    
        if(alumnos[i].notas[i].promedio>max){
            max = alumnos[i].notas[i].promedio;
            Pmax = i;
        }
           
    }

    cout<<"\n\nDatos y Mejor promedio de Alumno: "<<endl;
    cout<<"Nombre: "<<alumnos[Pmax].Nombre<<endl;
    cout<<"Edad: "<<alumnos[Pmax].edad<<endl;
    cout<<"Sexo: "<<alumnos[Pmax].Sexo<<endl;
    cout<<"Promedio: "<<alumnos[Pmax].notas[Pmax].promedio<<endl;

    system("pause");
    return 0;
}