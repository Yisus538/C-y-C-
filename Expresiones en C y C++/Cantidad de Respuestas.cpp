/*Elaborar un algoritmo que solicite el numero de respuestas correctas, incorrectas
y en blanco, correspondientes a postulantes y muestre su puntaje final considerando, 
que por cada respuesta correcta tendra 4 puntos, respuestas incorrectas tendra -1  y 
respuestas en blanco tendra 0 puntos. */

#include <iostream>

int main() {
	
	int correcta=0, incorrecta=0, blanco=0, total=0;
	
	std::cout<<"Ingrese la cantidad de respuestas correctas, incorrectas y en blanco: "<<std::endl;
	std::cin>>correcta>>incorrecta>>blanco;
	total=correcta*4-incorrecta;
	std::cout<<"Su puntaje total es: "<<total;
	
	return 0;
}
