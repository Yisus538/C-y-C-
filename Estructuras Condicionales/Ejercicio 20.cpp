/*Ingrese un numero y diga a que di­a de la semana corresponde (la semana 
empieza el domingo).*/

#include <iostream>


int main() {
	
	int dia=0;
	std::cout<<"Ingrese un numero del 1-7: ";
	std::cin>>dia;
	switch(dia){
		case 1: std::cout<<"Domingo";
			break;
		case 2: std::cout<<"Lunes";
			break;
		case 3: std::cout<<"Martes";
			break;
		case 4: std::cout<<"Miercoles";
			break;
		case 5: std::cout<<"Jueves";
			break;
		case 6: std::cout<<"Viernes";
			break;
		case 7: std::cout<<"Sabado";
			break;
	}
	return 0;
}

