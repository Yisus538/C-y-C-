#include <iostream>
#include "Estaticas.h"
#include <stdlib.h>
using namespace std;

int Estaticas::contador = 0;

Estaticas::Estaticas(){
    contador++;
}
int Estaticas::get_Estaticas(){
    return contador;
}