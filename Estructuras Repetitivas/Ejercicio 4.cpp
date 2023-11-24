/* 4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo
de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura 
mas alta y la mas baja.*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char* argv[]){
   
    float temperatura=0, mayor=0, menor=999,sumaTotal=0,promedio=0;

    for(int i=0; i<24;i+=4){
        cout<<"Digite la temperatura de la hora "<<i<<": "; cin>>temperatura;

        sumaTotal += temperatura;

        if(temperatura> mayor){
           mayor = temperatura;//24
        }
        if(temperatura< menor){
           menor = temperatura;
        }      
    }
    promedio = sumaTotal/6;

    cout<<"\nLa Temperatura Promedio: "<<promedio<<endl;
    cout<<"\nLa Temperatura mas alta: "<<mayor<<endl;
    cout<<"\nLa Temperatura mas baja: "<<menor<<endl;
    getch();
    return 0;
}