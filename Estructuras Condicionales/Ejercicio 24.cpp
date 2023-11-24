/*El banco de la ciudad ha decidido aumentar el limite de credito de las tarjetas 
de credito de sus clientes, para esto considera que si su cliente tiene tarjeta 
tipo 1, el aumento sera de 25 %; si tiene tipo 2, sera¡ de 35 %; si tiene tipo 3, 
de 40 %, y para cualquier otro tipo, de 50 %. 
Realice un algoritmo para determinar el nuevo limite de credito que tendra 
una persona en su tarjeta, para ello debera solicitar el tipo de tarjeta y 
el monto actual de su tarjeta.
*/
#include <iostream>

int main() {

	float monto_a=0, monto_n=0;
	int tipo=0;
	
	std::cout<<"Ingrese el monto actual: $"; 
	std::cin>>monto_a;
	std::cout<<"Seleccione el tipo de tarjeta: \n1.\n2.\n3.\nOtros.\n";
	std::cin>>tipo;

	switch(tipo){
		case 1: monto_n=monto_a*0.25+monto_a;
		break;
		case 2: monto_n=monto_a*0.35+monto_a;
		break;
		case 3:	monto_n=monto_a*0.40+monto_a;
		break;
		default:monto_n=monto_a*0.50+monto_a;
	}
	std::cout<<"El nuevo limite es de $"<<monto_n;
	return 0;
}
