/*Ingrese el monto de una cuota y el dia de pago. Si el dia de pago es menor o igual 
a 10 no se cobra recargo. De lo contrario si la cuota es mayor a $5000 se cobra 
el 10% de recargo, sino se cobra el 5%. Debe mostrar en todos los casos el 
recargo y el valor final de la cuota.*/

#include <iostream>

int main() {
	
	float monto=0, recargo=0, monto_recargo=0;
	int dia_pago=0;
	
	std::cout<<"Ingrese el monto de la cuota y el dia de pago: "<<std::endl;
	std::cin>>monto>>dia_pago;
	if(dia_pago>10){
		if(monto>5000){
			recargo=0.10*monto;
		}else{
			recargo=0.05*monto;
		}
		monto_recargo=monto+recargo;
		std::cout<<"\nRecargo: $"<<recargo<<"\nMonto con recargo: $"<<monto_recargo;
	}else{
		std::cout<<"\nSu factura no tiene recargo. Monto: $"<<monto;
	}
	return 0;
}
