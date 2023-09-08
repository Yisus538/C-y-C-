#include <iostream>
#include "Intercambio.h"

int main(){

    int dato1 = 0,dato2 = 0;    

    std::cout<<"Digite el valor del primer dato: "<<std::endl;
    std::cin>>dato1;
    std::cout<<"Digite el valor del segundo dato: "<<std::endl;
    std::cin>>dato2;

    //Intercambiar valores 
    intercambiar(dato1,dato2);

    std::cout<<"Los nuevos valores son: "<<std::endl;
    std::cout<<"Dato1 = "<<dato1<<std::endl;
    std::cout<<"Dato2 = "<<dato2<<std::endl;

    return 0;
}