/* Ingrese los lados de un triangulo y determine de que triangulo se trata. 
Si tiene todos los lados diferentes es escaleno, todos los lados iguales es 
equilatero y si tiene dos lados iguales y uno desigual es isosceles.*/

#include <iostream>
#include <stdio.h>

int main( ) {
	
	int l1=0, l2=0, l3=0;
	std::cout<<"Ingrese los lados de un triangulo: "<<std::endl;
	std::cin>>l1>>l2>>l3;
	if(l1==l2 && l1==l3)
	{
		std::cout<<"Equilatero.";
	}else{
		if((l1==l2 && l1!=l3) || (l1==l3 && l1!=l2) || (l2==l3 && l2!=l1)){
			std::cout<<"Isosceles";
		}else{
			std::cout<<"Escaleno";
		}
	}
	return 0;
}
