#include <iostream>
#include "Estudiante.h"
#include "Direccion.cpp"
#include "Expediente.cpp"
#include <stdlib.h>


Estudiante::Estudiante(string codigo,float promedio,int nroExpediente,string direccion) : exp(nroExpediente),dir(direccion){

    this->codigo = codigo;
    this->promedio = promedio;
}
void Estudiante::MostrarDatos(){

    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Direccion: "<<dir.getDireccion()<<endl;
    cout<<"Numero de Expediente: "<<exp.getExpediente()<<endl;
    cout<<"Promedio: "<<promedio<<endl;

}