/*
11. Hacer una estructura llamamda alumno, en la cual se tendran los siguentes campos:
    nombre,edad,promedio, pedir datos al usuario para 3 alumos, comprobar cual de los
    3 tiene el mejor promedio y posteriormente imrpimir los datos del alumno.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Alumno{
    char Nombre[30];
    int edad;
    float promedio;
}*puntero_usuario;

void Pedirdatos(Alumno *,int max);
void Mostrar(Alumno *puntero_usuario,int max);

int main(int argc,char*argv[]){

    int max;

    Pedirdatos(puntero_usuario,max);
    Mostrar(puntero_usuario,max);

    system("pause");
    return 0;
}
void Pedirdatos(int max){

    int pos;

    for(int i = 0; i < 3; i++){
        cout<<"Ingrese su nombre: "<<endl; cin.getline(puntero_usuario+i->Nombre,30,'\n');
        cout<<"Ingrese su edad: "<<endl; cin>>puntero_usuario+i->edad;
        cout<<"Ingresa tu promedio: "<<endl; cin>>puntero_usuario+i->promedio;

        if((*(puntero_usuario+i)->promedio)>max){
            max =(puntero_usuario+i)->promedio;
            pos = i;
        }
    }
        cout<<"\n\nDatos de Alumno"<<endl;
        cout<<"Nombre: "<<*(puntero_usuario+pos)->Nombre<<endl;
        cout<<"Edad: "<<*(puntero_usuario+pos)->edad<<endl;
        cout<<"Promedio: "<<max<<endl;

}
