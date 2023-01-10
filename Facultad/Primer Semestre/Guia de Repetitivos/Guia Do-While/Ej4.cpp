/*Un circo desea agilizar los tiempos de espera de los clientes 
para la compra de entradas, para ello, se le solicita que elabore 
un programa de venta de ticket de entradas. El programa debe 
solicitar al usuario que ingrese todas las edades del grupo 
familiar, hasta que ingrese cero (0), luego calcular y mostrar 
el monto total a pagar, de acuerdo a los siguientes precios: 

Menores de 5 anios gratis.
Entre 5 y 15 anios inclusive $20.
Mayores de 15 anios $40.
*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=0, sum=0;
	cout<<"Venta de entradas"<<endl;
	do{
		cout<<"Ingrese una edad (Fin=0): ";
		cin>>edad;
		if(edad>=5 && edad<=15){
			sum=sum+20;
		}
		if(edad>15){
			sum=sum+40;
		}
	}while(edad!=0);
	cout<<"Ud. debe abonar $"<<sum;
	return 0;
}

