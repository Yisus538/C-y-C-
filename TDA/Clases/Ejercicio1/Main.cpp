/*
Ejercicio 1:

    Definir una clase llamada DiaAnio con los atributos mes y dia, los metodos igual() y visualizar().
    El mes se registra como un valor entero(1,Enero,2,Febrero).
    El dia del mes se registra con otra variable entera llamada dia.

*/
#include <iostream>
#include "DiaAnio.cpp"
#include <stdlib.h>
using namespace std;

int main(int argc,char**argv){

    DiaAnio *hoy;
    DiaAnio *cumple;
    int d,m;

    cout<<"Ingrese el dia de hoy: "<<endl; cin>>d;
    cout<<"Ingrese el numero de mes: "<<endl; cin>>m;
    hoy = new DiaAnio(d,m);

    cout<<"Ingrese el dia de tu cumpleaños: "<<endl; cin>>d;
    cout<<"Ingrese el numero de mes de tu cumpleaños: "<<endl; cin>>m;
    cumple = new DiaAnio(d,m);

    hoy->Visualizar();
    cout<<"\n";
    cumple->Visualizar();

    if(hoy->igual(*cumple)){
        cout<<"FELIZ CUMPLEAÑOS!!!"<<endl;
    }else{
        cout<<"Que tengas un buen dia."<<endl;
    }


    system("pause");
    return 0;
}