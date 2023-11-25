#include <iostream>
#include <stdlib.h>
#include "Punto.cpp"
using namespace std;

int main(int argc,char**argv){

    Punto obj1(2,3); //Objeto estatico.
    Punto obj2;

    cout<<"El valor de x es: "<<obj1.GetX()<<endl;
    cout<<"El valor de y es: "<<obj1.GetY()<<endl;

    obj2.SetX(5);
    obj2.SetY(6);

    cout<<"El valor de x es: "<<obj2.GetX()<<endl;
    cout<<"El valor de y es: "<<obj2.GetY()<<endl;

    system("pause");
    return 0;
}