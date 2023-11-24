#include <iostream>
#include <math.h>


int main(int argc,char*argv[]){

    float a=0, b=0, c=0, resultado1=0, resultado2=0;

    std::cout<<"Cual es a: \n"; std::cin>>a;
    std::cout<<"Cual es b: \n"; std::cin>>b;
    std::cout<<"Cual es c: \n"; std::cin>>c;

    resultado1 = (-b+ (sqrt(pow(b,2)- (4*a*c))))/(2*a);
	resultado2 = (-b- (sqrt(pow(b,2)- (4*a*c))))/(2*a);

    std::cout<<"El resultado 1 es: "<<resultado1<<std::endl;
    std::cout<<"El resultado 2 es: "<<resultado2<<std::endl;

    return 0;
}