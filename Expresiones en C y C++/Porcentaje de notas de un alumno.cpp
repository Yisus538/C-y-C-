#include <iostream>


int main(){

    float practica=0, teorica=0, participacion=0, nota_final= 0;

	std::cout<<"Digite la nota practica: \n "; std::cin>>practica;
	std::cout<<"Digite la nota del teorico: \n"; std::cin>>teorica;
	std::cout<<"Digite la nota de participacion: \n"; std::cin>>participacion;
	
	practica = practica * 0,30;
	teorica = teorica * 0,60;
	participacion = participacion * 0,10;
	
	nota_final = practica + teorica + participacion;
	
	std::cout<<"La nota final es: "<<nota_final;
    
    return 0;
}