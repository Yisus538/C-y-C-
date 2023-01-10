#include <iostream>
#include "Direccion.h"
using namespace std;

Direccion::Direccion(string direccion){
    this->direccion = direccion;
}
Direccion::getDireccion(){
    return direccion;
}