/*Realizar un algoritmo para determinar la cantidad de numeros 
positivo y negativos que han sido ingresados.*/

#include <iostream>

int main() {
	int pos=0, neg=0, num=0;
	std::cout<<"Numeros positivos y negativos [Fin = 0]:"<<std::endl;
	do{
		std::cout<<"Ingrese un numero: ";
		std::cin>>num;
		if(num>0 && num!=0){
			pos++;	
		}
		if(num<0 && num!=0){
			neg++;
		}
	}while(num!=0);
	std::cout<<"Cantidades: \nPositivos: "<<pos<<" Negativos: "<<neg;
	return 0;
}
