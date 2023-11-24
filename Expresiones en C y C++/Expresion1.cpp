#include <iostream>

int main(){
    
	float a = 0, b =0, resultado=0;
	
	 std::cout<<"Ingrese la variable a: \n"; std::cin>>a;
	 std::cout<<"Ingrese la variable b: \n"; std::cin>>b;
	 std::cout.precision(2);
	resultado = (a/b) + 1;
	 std::cout<<"El resultado de su operacion es: " <<resultado<< std::endl;

    return 0;
}