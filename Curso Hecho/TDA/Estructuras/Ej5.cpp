/*
5. Hacer 2 estructuras una llamada promeido que tendra los sig cammpos: n1,n2,n3; y otro llamada alumno que tendra los
   siguientes miembros: nombre,sexo,edad; hacer que la estructura alumno, luego pedir todos los datos para un alumno,
   luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

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
    cout<<"Ingrese el nombre: "<<endl;
    cin.getline(alumnos.Nombre,20,'\n');
    cout<<"Ingrese el sexo de la persona: "<<endl;
    cin.getline(alumnos.Sexo,20,'\n');
    cout<<"Ingrese la edad: "<<endl;
    cin>>alumnos.edad;


    cout<<"\n\nIngrese nota 1: "<<endl;
    cin>>promedio.nota1;
    cout<<"Ingrese nota 2: "<<endl;
    cin>>promedio.nota2;
    cout<<"Ingrese nota 3: "<<endl;
    cin>>promedio.nota3;
    
    cout<<"\n\nDatos y Promedio de Alumno: "<<endl;
    cout<<"Nombre: "<<alumnos.Nombre<<endl;
    cout<<"Edad: "<<alumnos.edad<<endl;
    cout<<"Sexo: "<<alumnos.Sexo<<endl;
    cout<<"Promedio: "<<((promedio.nota1+promedio.nota2+promedio.nota3)/3)<<endl;


    system("pause");
    return 0;
}