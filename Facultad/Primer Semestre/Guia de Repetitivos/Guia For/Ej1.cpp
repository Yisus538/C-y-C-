/*Realizar un programa que muestre la tabla de multiplicar del 
1 al 10 de un numero. Ejemplo: Si ingreso 2 debera aparecer en 
pantalla los valores 2, 4, 6, hasta el 20.*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int i=0, num=0;
	cout<<"Ingrese un numero: ";
	cin>>num;
	for(i=0;i<10;i++){
		cout<<i+1<<" x "<<num<<" = "<<(i+1)*num<<endl;
	}
	return 0;
}
