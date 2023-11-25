#include <iostream>
#include "Estudiante.cpp"
#include <stdlib.h>
using namespace std;

int main(int argc,char**argv){

    Estudiante *estudiante = new Estudiante("34FS",15.2,25,"Achaval");

    estudiante->MostrarDatos();

    system("pause");
    return 0;
}