/*
Ejercicio 3: defina una plantilla para la clase materia, de tal manera que el tipo de dato del atributo
calificacion sea del tipo T. Esto permitira crear objetos de tipo mareria que tengan calificaciones
que sean: numeros enteros, numeros decimales y letras.
*/
#include <iostream>
#include "Materia.h"

int main(){
    
    Materia<int> curso1("Algoritmos",1,15);
    Materia<float> curso2("Matematicas",2,18.89);
    Materia<char> curso3("Lenguaje",3,'A');

    std::cout<<"Mostrando Datos del Curso1"<<std::endl;
    curso1.mostrarDatos();
    std::cout<<"\nMostrando Datos del Curso2"<<std::endl;
    curso2.mostrarDatos();
    std::cout<<"\nMostrando Datos del Curso3"<<std::endl;
    curso3.mostrarDatos();

    curso1.setCalificacion(19);
    std::cout<<"La nueva calificacion de curso 1 es: "<<curso1.getCalificacion()<<std::endl;
    

    return 0;
}