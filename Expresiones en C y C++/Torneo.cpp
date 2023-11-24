/*Elaborar un algoritmo que permita ingresar el numero de partidos ganados, 
perdidos y empatados, por algun equipo en el torneo apertura, se debe de 
mostrar su puntaje total, teniendo en cuenta que por cada partido ganado 
obtendra 3 puntos, empatado 1 y perdido 0 puntos.*/
#include <iostream>

int main() {

	int ganado=0, empatado=0, perdido=0, total=0;

	std::cout<<"Ingrese la cantidad de partidos ganados, empatados y perdidos: "<<std::endl;
	std::cin>>ganado>>empatado>>perdido;
	total=ganado*3+empatado;
	std::cout<<"Su puntaje total es: "<<total;
	return 0;
}
