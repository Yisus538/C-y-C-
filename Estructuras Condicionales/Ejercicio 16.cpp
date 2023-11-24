/*Escribir un programa que solicite el ingreso de la temperatura en grados, 
si la temperatura esta por encima de 100 grados desplegar el mensaje "arriba del punto de 
ebullicion del agua", de lo contrario desplegar el mensaje "abajo del punto de 
ebullicion del agua".
*/

#include <iostream>
#include <stdio.h>

int main() {
	
    float temp=0;
	
	std::cout<<"Ingrese una temperatura en grados: "<<std::endl;
	std::cin>>temp;
	if(temp>100){
		std::cout<<"Arriba del punto de ebullicion del agua. ";
	}else{
		std::cout<<"Abajo del punto de ebullicion del agua. ";
	}
	return 0;
}
