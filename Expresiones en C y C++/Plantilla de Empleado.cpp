/*Se requiere un algoritmo para elaborar la planilla 
de un empleado. Para ello se dispone de sus horas 
trabajadas en el mes, asi­ como la de la tarifa por hora.*/

#include <iostream>

int main() {
	
	float cant_hs=0, tarifa=0, sueldo=0;
	std::cout<<"Ingrese la cantidad de hs trabajadas en el mes: "; std::cin>>cant_hs;
	std::cout<<"Ingrese la tarifa por hora: "; std::cin>>tarifa;
	sueldo=cant_hs*tarifa;
	std::cout<<"Su sueldo es de $"<<sueldo; 
	return 0;
}

