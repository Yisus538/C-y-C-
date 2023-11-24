/*Una expendedora de alfajores de chocolate tiene 3 tipos: simple, doble y triple 
capa de dulce de leche, las cuales tienen un costo de $10.00, $20.00 y $30.00 
respectivamente. La m√°quina permite realizar el pago total de la compra en
efectivo, debito, tarjeta de credito. Para cada caso:
- Si el cliente paga en efectivo, el programa debera calcular el vuelto en 
caso de no pagar justo.
- Si el cliente paga con debito, tiene un descuento del 2% del total de la compra
- Si el cliente paga con tarjeta de credito, tiene un recargo del 2% del total de la compra.
Realice un algoritmo que permita solicitar el tipo de alfajor, el modo de pago 
y calcule el monto a abonar por el cliente.  */
#include <iostream>

int main() {
	int tipo_alfajor=0; 
	char tipo_pago=' ';
	float precio=0, monto=0, pago=0, vuelto=0;
	
	std::cout<<"Ingrese que tipo de alfajor (1-2-3): ";
	std::cin>>tipo_alfajor;
	
	switch(tipo_alfajor){
	case 1: precio=10;
	break;
	case 2: precio=20;
	break;
	case 3: precio=30;
	break;
	}
	//E: Efectivo  D:Debito  T:Tarjeta
	std::cout<<"El precio es de: $"<<precio<<". øComo lo va pagar (E-D-T)? ";
	std::cin>>tipo_pago;
	
	switch(tipo_pago){
	case 'E': 
		std::cout<<"\nPago Efectivo. \nEl precio es $"<<precio<<", øCon cuanto va pagar?";
		std::cin>>pago;
		if(pago!=precio){
			vuelto=pago-precio;
			std::cout<<"\nSu vuelto es $"<<vuelto;
		}
			break;
		case 'D': 
			monto=precio-0.02*precio;
			std::cout<<"\nPago Debito. \nDescuento de 2%. El precio es $"<<monto;
			break;
		case 'T': 
			monto=precio+0.02*precio;
			std::cout<<"\nPago Tarjeta. \nRecargo de 2%. El precio es $"<<monto;
			break;
		}
	return 0;
}
