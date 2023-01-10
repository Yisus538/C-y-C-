/*Ingresar un numero y mostrar el numero de forma invertida ejemplo 123 - 321.
Nota: Se esta utilizando el sistema decimal.*/

#include <iostream>
using namespace std;

void invertir(int);

int main(int argc, char *argv[]) {
	int num;
	cout<<"Ingrese un numero de mas de un digito: ";
	cin>>num;
	invertir(num);
	return 0;
}

void invertir(int num){
	//se utiliza el 10 porque estamos en el sistema decimal.
	// % se obtiene el resto de la division.
	cout<<num%10;
	
	if (num>10) //caso recursivo
		
		invertir(num/10);
}
