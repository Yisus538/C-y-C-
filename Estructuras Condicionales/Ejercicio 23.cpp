/*Una compani�a de envi�o internacional tiene servicio en algunos pai�ses del mundo. 
El costo por el servicio de envio se basa en el peso del paquete y la zona a la 
que va dirigido. 
Zona Ubicacion Costo por gramo
1. America del Norte y Central $30
2. America el Sur $20
3. Europa $70
4. Asia y Oceani�a $100

Realice un algoritmo para determinar el costo de envio de un paquete. 
Nota: 1000 gr. = 1 kg. 

Datos de entrada:
zona (entero - int)
peso (decimal - float)

Proceso.... como obtengo los datos salida con los de entrada.

Dato de salida:
Costo de envio monto (decimal- float)

*/

#include <iostream>

int main() {

	int zona=0; 
	float peso=0, monto=0;

	std::cout<<"Ingrese peso (gr.): ";
	std::cin>>peso;
	std::cout<<"Ingrese zona: ";
	std::cin>>zona;
	switch(zona){
		case 1: std::cout<<"Zona America del Norte y Central. ";
			monto=peso*30;
			break;
		case 2: std::cout<< "Zona America del Sur. ";
			monto=peso*20;
			break;
		case 3:std::cout<<"Zona de Europa. ";
			monto=peso*70;
			break;
		case 4:std::cout<<"Zona Asia y Oceania. ";
			monto=peso*120;
			break;
	}
	std::cout<< "El monto es: $"<<monto;
	return 0;
}
