/*Se requiere un algoritmo para elaborar la planilla 
de un empleado. Para ello se dispone de sus horas 
trabajadas en el mes, asi­ como la de la tarifa por hora.*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	float cant_hs=0, tarifa=0, sueldo=0;
	cout<<"Ingrese la cantidad de hs trabajadas en el mes: ";
	cin>>cant_hs;
	cout<<"Ingrese la tarifa por hora: ";
	cin>>tarifa;
	sueldo=cant_hs*tarifa;
	cout<<"Su sueldo es de $"<<sueldo; 
	return 0;
}

