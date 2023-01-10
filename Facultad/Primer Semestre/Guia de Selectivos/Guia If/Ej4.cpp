/*Escribir un programa que solicite el ingreso de la temperatura en grados, 
si la temperatura esta por encima de 100 grados desplegar el mensaje "arriba del punto de 
ebullicion del agua", de lo contrario desplegar el mensaje "abajo del punto de 
ebullicion del agua".
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	float temp=0;
	cout<<"Ingrese una temperatura en grados: "<<endl;
	cin>>temp;
	if(temp>100){
		cout<<"Arriba del punto de ebullicion del agua. ";
	}else{
		cout<<"Abajo del punto de ebullicion del agua. ";
	}
	return 0;
}
