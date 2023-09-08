#include <iostream>
#include "Ejemplo.h"

int main(){

    Ejemplo <int,float> obj1(5,9.87);

    obj1.mostrarDatos();
    obj1.setDato1(10);
    obj1.setDato2(8.78);

    std::cout<<std::endl;

    obj1.mostrarDatos();

    return 0;
}