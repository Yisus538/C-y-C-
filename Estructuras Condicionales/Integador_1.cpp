/*Una compañi­a de envio internacional tiene servicio en algunos pai­ses del mundo. 
El costo por el servicio de envio se basa en el peso del paquete y la zona a la 
que va dirigido. Si el paquete pesa mayor igual a 300 gr el costo por zona es el 
doble.
	
Zona	Ubicacion	Costo por gramo
1	America del Norte y Central $30
2	America el Sur	$20
3	Europa	$70
4	Asia y Oceania	$100
	
Realice un algoritmo para determinar el costo de envio de un paquete. */
#include <iostream>
#include <stdio.h>

int main() {
	
	int zona=0; 
	float peso=0, monto=0;
	
	std::cout<<"¿A donde va enviar el paquete?\n1. A. Norte y A. Central\n2. A. Sur\n3. Europa\n4. Asia y Oceania\nIngrese zona y el peso (gr.): \n";
	std::cin>>zona>>peso;
	switch(zona){
	case 1: 
		monto=peso*30;
		break;
	case 2: 
		monto=peso*20;
		break;
	case 3:
		monto=peso*70;
		break;
	case 4:
		monto=peso*120;
		break;
	}
	if(peso>=300)
	{
		monto=monto*2;
	} 
	std::cout<< "El monto es: $"<<monto;
	return 0;
}
