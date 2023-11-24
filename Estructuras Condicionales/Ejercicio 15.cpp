/*Una empresa de telefoni­a lanza una promocion a sus clientes que han llamado 
mas de 1000 minutos de llamadas locales y 1000 minutos de llamadas a larga 
distancia haciendoles un descuento en su factura del 10%. Tengase en cuenta 
que el precio del minutos de llamadas locales es de $0.05 y de las llamadas de 
larga a distancia es de $0.10.
Realice un algoritmo en la cual solicite los datos necesarios al cliente e 
informar si es o no beneficiario de tal promocion y cuanto deber­a abonar en 
su proxima factura. */

#include <iostream>
#include <stdio.h>


int main(int argc, char *argv[]) {
	
	int local=0, distancia=0;
	float monto=0, monto_promocion=0;
	
	std::cout<<"Ingrese la cantidad de minutos locales y larga distancia: "<<std::endl;
	std::cin>>local>>distancia;
	monto=local*0.05+distancia*0.10;
	if(local>1000 && distancia>1000)
	{
		monto_promocion=monto-0.1*monto;
		std::cout<<"Su factura es de $"<<monto<<". \nUsted es beneficiario de un descuento del 10%. \nDebe abonar $"<<monto_promocion;
	}else{
		std::cout<<"Su factura es de $"<<monto<<". No tiene descuento.";
	}
	return 0;
}
