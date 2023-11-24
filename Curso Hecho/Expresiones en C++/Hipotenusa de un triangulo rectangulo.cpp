#include <iostream>
#include <math.h>


int main(){
     
    float cateto1=0, cateto2=0, hip=0;

    std::cout<<"Ingrese el cateto 1: "; std::cin>>cateto1;
    std::cout<<"Ingrese el cateto 2:"; std::cin>>cateto2;

    hip = sqrt(pow(cateto1,2)+ pow(cateto2,2));

    std::cout.precision(2);
    std::cout<<"La hipotenusa del triangulo es: "<<hip<<std::endl;
    return 0;
}