/*Desarrollar un programa que permita la carga de 5 valores por 
teclado y nos muestre posteriormente la suma de los valores 
ingresados y su promedio.*/

#include <iostream>

int main() {
	int i=0, num=0, sumador=0, prom=0;
	for(i=0;i<5;i++){
		std::cout<<"Ingrese un numero: ";
		std::cin>>num;
		sumador=sumador+num;
	}
	prom=sumador/5;
	std::cout<<"\nSumatoria: "<<sumador<<" Promedio: "<<prom;
	return 0;
}
