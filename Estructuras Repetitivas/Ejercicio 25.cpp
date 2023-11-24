/*Desarrollar un programa que permita la carga de n valores por 
teclado y nos muestre posteriormente la cantidad de veces que se 
repita el numero 10. */
#include <iostream>


int main() {
	int n=-1, cant=0;
	
	while(n!=0){
		std::cout<<"Ingrese un valor (Fin=0): ";
		std::cin>>n;
		if(n==10){
			cant++;
		}
	}
	std::cout<<"Cantidad de veces que se repitio 10: "<<cant;
	return 0;
}

