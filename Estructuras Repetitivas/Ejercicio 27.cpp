/*Escribir un programa que permita realizar descuentos en un 
comercio, en funcion del total de arti­culos que lleva el cliente. 
Para realizar dichos descuentos, se deben leer los importes de 
cada articulo hasta que un importe sea igual a cero; 
posteriormente se escribira el importe total a pagar teniendo 
en cuenta que se pueden efectuar los siguientes descuentos:

- Si el importe total de la compra esta entre $50 y $120, 
el descuento es del 15%.
- Si el importe total de la compra es mayor de $120 el descuento 
es del 20%.
- La lectura de clientes finaliza tras responder al mensaje 
¿Mas clientes (S/N)?, mostrando al final la suma total de todos 
los importes cobrados por el negocio.*/
#include <iostream>


int main() {
	
	float importe=-1, total_compra=0, recaudacion=0;
	char rta='s';
	
	while(rta=='s'){
		while(importe!=0){
			std::cout<<"Ingrese el importe de un articulo $ ";
			std::cin>>importe;
			if(importe!=0){
				total_compra=total_compra+importe;
			}
		}//cierre del while importe!=0
		//calculos del importe total a pagar del cliente.
		if(total_compra<50){
			std::cout<<"Ud. debe abonar $"<<total_compra<<std::endl;
		}else{
			if(total_compra<=120){
				total_compra=total_compra-(total_compra*0.15); //descuento 15
				std::cout<<"Su compra tiene un descuento del 15%, Ud. debe abonar $"<<total_compra<<std::endl;
			}else{
				total_compra=total_compra-(total_compra*0.20); //descuento 20
				std::cout<<"Su compra tiene un descuento del 20%, Ud. debe abonar $"<<total_compra<<std::endl;
			}
		}
		//Sumatoria de la recaudacion del negocio.
		recaudacion=recaudacion+total_compra;
	
		//inicializar variables para el proximo cliente.
		total_compra=0;
		importe=-1;
	
		std::cout<<"\n¿Mas clientes (s/n)? ";
		std::cin>>rta;
	}//cierre del while rta=='s'
	
	std::cout<<"\nLa recaudacion del negocio es $"<<recaudacion<<std::endl;
	
	return 0;
}

