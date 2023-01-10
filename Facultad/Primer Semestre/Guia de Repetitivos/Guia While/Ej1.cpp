/*Desarrollar un programa que permita la carga de n valores por 
teclado y nos muestre posteriormente la cantidad de veces que se 
repita el numero 10. */
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n=-1, cant=0;
	
	while(n!=0){
		cout<<"Ingrese un valor (Fin=0): ";
		cin>>n;
		if(n==10){
			cant++;
		}
	}
	cout<<"Cantidad de veces que se repitio 10: "<<cant;
	return 0;
}

