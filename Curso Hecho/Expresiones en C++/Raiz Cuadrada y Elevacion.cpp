#include <iostream>
#include <math.h>

int main(){
    
    float x= 0, y=0, resultado=0;

    std::cout<<"Ingrese x: "; std::cin>>x;
    std::cout<<"Ingrese y"; std::cin>>y;

    resultado = (sqrt(x))/ (pow(y,2) -1);
    std::cout<<"El resultado es: "<<resultado<<std::endl;
    return 0;
}