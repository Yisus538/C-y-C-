#include <iostream>


int main(int argc, char *argv[]){
    
    float a =0, b=0, c=0, d=0, resultado=0;

    std::cout<<"Ingrese el digito a: \n"; std::cin>>a;
    std::cout<<"Ingrese el digito b: \n"; std::cin>>b;
    std::cout<<"Ingrese el digito c: \n"; std::cin>>c;
    std::cout<<"Ingrese el digito d: \n"; std::cin>>d;

    std::cout.precision(2);
    resultado = a + (b/(c-d));
    std::cout<<"EL resultado es: "<<resultado<<std::endl;
    return 0;
}