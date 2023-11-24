/*Ingrese la cantidad de unidades que tiene una materia y la cantidad de 
unidades estudiadas por el alumno y determine si el alumno estudio toda la 
materia o cuantas unidades le faltan estudiar. */

#include <iostream>
#include <stdio.h>

int main() {
	
	int unidad_total=0, unidad_alu=0, unidad_falta;	
	
	std::cout<<"Ingrese la cantidad total de unidades de la materia y la cantidad de unidades estudiadas: "<<std::endl;
	std::cin>>unidad_total>>unidad_alu;
	if(unidad_total==unidad_alu){
		std::cout<<"Felicitaciones!!! Has estudiado todo.";
	}else{
		unidad_falta=unidad_total-unidad_alu;
		std::cout<<"Te faltan "<<unidad_falta<<" unidades por estudiar.";
	}
	return 0;
}
