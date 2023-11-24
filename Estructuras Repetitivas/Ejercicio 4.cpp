/* 4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo
de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura 
mas alta y la mas baja.*/
#include <iostream>

int main(){
   
    float temperatura=0, mayor=0, menor=999,sumaTotal=0,promedio=0;

    for(int i=0; i<24;i+=4){
        std::cout<<"Digite la temperatura de la hora "<<i<<": "; std::cin>>temperatura;

        sumaTotal += temperatura;

        if(temperatura> mayor){
           mayor = temperatura;//24
        }
        if(temperatura< menor){
           menor = temperatura;
        }      
    }
    promedio = sumaTotal/6;

    std::cout<<"\nLa Temperatura Promedio: "<<promedio<<std::endl;
    std::cout<<"\nLa Temperatura mas alta: "<<mayor<<std::endl;
    std::cout<<"\nLa Temperatura mas baja: "<<menor<<std::endl;
    system("pause");
    return 0;
}