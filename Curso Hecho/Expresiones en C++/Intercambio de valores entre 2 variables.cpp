#include <iostream>]

int main(int argc, char *argv[]){
    
    int x=0, y=0, aux=0;

    std::cout<<"Digita el valor de x: \n"; std::cin>>x;
    std::cout<<"Digita el valor de y: \n"; std::cin>>y;

    aux = x;
    x= y;
    y = aux;

    std::cout<<"El nuevo valor de x es: "<<x<<std::endl;
    std::cout<<"El nuevo valor de y es: "<<y<<std::endl;
    
    return 0;
}