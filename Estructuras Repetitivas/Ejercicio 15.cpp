/*Realizar un programa que muestre la tabla de multiplicar del 
1 al 10 de un numero. Ejemplo: Si ingreso 2 debera aparecer en 
pantalla los valores 2, 4, 6, hasta el 20.*/

#include <iostream>

int main() {
	
	int i=0, num=0;
	
	std::cout<<"Ingrese un numero: ";
	std::cin>>num;
	
	for(i=0;i<10;i++){
		std::cout<<i+1<<" x "<<num<<" = "<<(i+1)*num<<std::endl;
	}
	return 0;
}
