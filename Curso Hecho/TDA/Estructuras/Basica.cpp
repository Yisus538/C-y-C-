//Estructura Basica en c++
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Persona{

    char nombre[20];
    int edad;

}persona1 = {"Yisus",19},persona2 = {"Manu",17};

int main(int argc,char*argv[]){
    
    cout<<"Nombre1: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;
    cout<<"Nombre2: "<<persona2.nombre<<endl;
    cout<<"Edad: "<<persona2.edad<<endl;

    system("pause");
    return 0;
}