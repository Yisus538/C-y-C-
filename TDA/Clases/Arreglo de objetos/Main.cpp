#include <iostream>
#include "Alumnos.cpp"
#include <stdlib.h>
using namespace std;

int main(int argc,char**argv){

    Alumnos alumnos[4];
    Alumnos *alumnos2 = new Alumnos[3];

    for(int i = 0; i < 3; i++){
        (alumnos2+i)->PedirDatos();
        cout<<"\n";
    }
    for(int i = 0; i < 3; i++){
        (alumnos2+i)->MostrarNotas();
        cout<<"\n";
    }

    system("pause");
    return 0;
}
