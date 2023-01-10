/*Escribir un programa que declare una variable llamada a, un puntero del tipo de la variable 
creada, inicialice la variable e inicialice el puntero para que apunte a la variable 
creada. Luego que imprima por pantalla: la direccion de memoria de la variable, el 
valor que almacena la variable, el valor del puntero y el valor al que apunta el 
puntero.*/

#include <iostream>

using namespace std; 

int main()
{
	int a=10;
	int *ptr_a;
	ptr_a=&a; //se asigna la direccion de la variable (a) al puntero (ptr_a)
	
	printf("Direccion de memoria de la variable: %X\n", &a);
	printf("El valor de la variable es: %d\n", a);
	printf("El valor del puntero es: %X\n",ptr_a);
	printf("El valor al que apunta el puntero es: %d\n", *ptr_a);

	return 0; 
} 
