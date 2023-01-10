/*Escribir un programa que intercambie los valores enteros de a y b 
utilizando punteros*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a=5, b=6; // declaramos e inicializamos las variables
	int *ptr_a=&a, *ptr_b=&b; //declaramos e inicializamos los punteros a las variables
	int *ptr_aux=NULL;
	
	printf("Valores originales\n");
	printf("a=%d\tb=%d\n", *ptr_a, *ptr_b);
	
	//intercambiamos utilizando un puntero auxiliar.
	ptr_aux=ptr_a;
	ptr_a=ptr_b;
	ptr_b=ptr_aux;
	
	printf("Valores intercambiados\n");
	printf("a=%d\tb=%d\n", *ptr_a, *ptr_b);
	
	return 0;
}

