/*Elaborar un algoritmo que permita ingresar el numero de partidos ganados, 
perdidos y empatados, por algun equipo en el torneo apertura, se debe de 
mostrar su puntaje total, teniendo en cuenta que por cada partido ganado 
obtendra 3 puntos, empatado 1 y perdido 0 puntos.*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int ganado=0, empatado=0, perdido=0, total=0;
	cout<<"Ingrese la cantidad de partidos ganados, empatados y perdidos: "<<endl;
	cin>>ganado>>empatado>>perdido;
	total=ganado*3+empatado;
	cout<<"Su puntaje total es: "<<total;
	return 0;
}
