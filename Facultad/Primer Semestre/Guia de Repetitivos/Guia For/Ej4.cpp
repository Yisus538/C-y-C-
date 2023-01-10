/*Se solicita un algoritmo que calcule cuanto ha podido ahorrar 
en un anio una persona. Para ello se solicita cuanto ha sido su 
sueldo en cada uno de los meses y cuanto ha gastado en cada uno 
de los meses. */

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int i=0; 
	float ahorro=0, sueldo=0, gasto=0;
	for(i=0;i<12;i++){
		cout<<"Ingrese su sueldo y gasto en el mes "<<i+1<<": \n";
		cin>>sueldo>>gasto;
		ahorro=ahorro+(sueldo-gasto);
	}
	cout<<"\nEl ahorro de este año es de $"<<ahorro;
	return 0;
}
