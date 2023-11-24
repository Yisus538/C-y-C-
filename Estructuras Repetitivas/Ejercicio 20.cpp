/*Realizar un algoritmo que solicite las edades de las personas, 
y luego obtenga la edad promedio. La cantidad de personas que se 
registran se desconoce.*/

#include <iostream>


int main() {
	int edad=0, cant=-1, sum=0;
	float prom=0;
	std::cout<<"Promedio de edad [Fin = 0]: "<<std::endl;
	do{
		std::cout<<"Ingrese edad: ";
		std::cin>>edad;
		sum=sum+edad;
		cant++;
	}while(edad!=0);
	prom=(int)sum/cant;
	std::cout<<"Promedio de edad: "<<prom;
	return 0;
}

