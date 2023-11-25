#include <iostream>
#include "Alumnos.h"
using namespace std;

Alumnos::Alumnos(){

}
Alumnos::Alumnos(float CalcMate,float CalcProg){
    this->CalcMate = CalcMate;
    this->CalcProg = CalcProg;
}
void Alumnos::PedirDatos(){

    cout<<"Digite la calificacion de Mate: "<<endl;
    cin>>CalcMate;
    cout<<"Digite la calificacion de Programacion: "<<endl;
    cin>>CalcProg;

}
void Alumnos::MostrarNotas(){

    cout<<"CALIFICACIONES DE ALUMNOS"<<endl;
    cout<<"Matematica: "<<CalcMate<<endl;
    cout<<"Programacion: "<<CalcProg<<endl;
    cout<<"Promedio: "<<(CalcMate+CalcProg)/(float)2<<endl;

}