#include <iostream>

int main(){
    
    float a= 0, b=0, c=0, d=0, resultado =0;
    std::cout<<"Ingrese la variable a: \n"; std::cin>>a;
    std::cout<<"Ingrese la variable b: \n"; std::cin>>b;
    std::cout<<"Ingrese la variable c: \n"; std::cin>>c;
    std::cout<<"Ingrese la variable d: \n"; std::cin>>d;
    std::cout.precision(2);
    resultado = (a + b) / (c + d);
    std::cout<<"El resultado es: \n"<<resultado<<std::endl;
    
    return 0;
}