/*Elaborar un algoritmo que solicite el numero de respuestas correctas, incorrectas
y en blanco, correspondientes a postulantes y muestre su puntaje final considerando, 
que por cada respuesta correcta tendra 4 puntos, respuestas incorrectas tendra -1  y 
respuestas en blanco tendra 0 puntos. */

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int correcta=0, incorrecta=0, blanco=0, total=0;
	cout<<"Ingrese la cantidad de respuestas correctas, incorrectas y en blanco: "<<endl;
	cin>>correcta>>incorrecta>>blanco;
	total=correcta*4-incorrecta;
	cout<<"Su puntaje total es: "<<total;
	return 0;
}
