/*Realizar un programa que solicite el ingresar de un número y mostrar su 
equivalente en binario usando una función recursiva.
Por ejemplo:
SISTEMA DECIMAL	SISTEMA BINARIO
2				10
3				11
4				100
5				101
*/


#include <iostream>
using namespace std;

int pasar_binario(int);

int main(int argc, char *argv[]) {	
	int numero=0;	
	cout<<"Ingrese un numero entero (sistema decimal) pasar al sistema binario: "<<endl;
	cin>>numero;	
	pasar_binario(numero);	
	return 0;	
}
		
int pasar_binario(int numero){	
	//si numero es mayor que 1, puedo seguir dividiendo por 2
	if(numero>1)
		pasar_binario(numero/2);

	//Muestro el resto de la division de numero dividido 2.
	cout<<numero%2; //% obtiene el resto de una division
	return 0;
}

