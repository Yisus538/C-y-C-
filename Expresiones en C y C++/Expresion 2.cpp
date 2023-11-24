#include <iostream>

int main(){

    float a=0, b=0, c=0, d=0,e=0,f=0, resultado=0;

    std::cout<<"Ingrese el digito a: \n"; std::cin>>a;
    std::cout<<"Ingrese el digito b: \n"; std::cin>>b;
    std::cout<<"Ingrese el digito c: \n"; std::cin>>c;
    std::cout<<"Ingrese el digito d: \n"; std::cin>>d;
    std::cout<<"Ingrese el digito e: \n"; std::cin>>e;
    std::cout<<"Ingrese el digito f: \n"; std::cin>>f;
    std::cout.precision(2);

    resultado = (a + (b/c)) / (d + (e/f));
    std::cout<<"El resultado es: "<<resultado<<std::endl;
    return 0;
}