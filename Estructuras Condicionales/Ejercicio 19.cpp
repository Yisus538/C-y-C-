/*El director de una escuela esta organizando un viaje de estudios. La compañia viajes 
cobra de la siguiente manera de acuerdo a la cantidad de alumnos que vayan:

Cantidad de alumnos	Precio por Alumno
Mas de 100	$65
de 50 a 99	$70
de 30 a 49	$95
menos de 30	$100

Por otra parte, el colectivo no esta incluido por la compañia de viajes, por lo que 
el director contratara un colectivo que tiene un valor de $4000.00. Este costo es 
asumido por todos los alumnos. 

Realice un algoritmo que permita determinar cuanto hay que cobrarle a cada alumno 
(el viaje de estudio + el colectivo) y cuanto es el total que el director le tiene 
que entregar a la compañia de viajes.
*/

#include <iostream>

int main() {

	int cant_alu=0;
	float total=0, costo_alu=0, precio=0, pago=0;

	std::cout<<"Ingrese la cantidad de alumnos: ";
	std::cin>>cant_alu;
	if(cant_alu>=100)
	{
		precio=65;
	}else{
		if(cant_alu>=50 && cant_alu<=99)
		{
			precio=70;
		}else{
			if(cant_alu>=30 && cant_alu<=49)
			{
				precio=95;
			}else{
				precio=100;
			}
		}
	}
	total=4000+precio*cant_alu;
	costo_alu=total/cant_alu;
	pago=total-4000;
	std::cout<<"\nTotal del viaje: $"<<total<<"./nCosto por alumno: "<<costo_alu<<".\nMonto a la agencia: $"<<pago<<".";
	return 0;
}
