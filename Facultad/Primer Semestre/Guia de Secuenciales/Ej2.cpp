/*Un teatro desea crear un sistema de compra de 
entradas automatico. El sistema solicita al espectador 
cuantas entradas desea y luego muestra el monto a pagar. 
Tener en cuenta que cada entrada cuesta $200. 
(Nota: se asume que el cliente realiza pago exacto).*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	float cant_entrada=0, total=0;
	cout<<"Ingrese la cantidad de entradas a comprar: ";
	cin>>cant_entrada;
	total=cant_entrada*200;
	cout<<"El monto a pagar es de $"<<total;
	return 0;
}
