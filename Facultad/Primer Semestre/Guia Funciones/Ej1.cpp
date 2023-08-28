/*Escribir un programa que ingrese un numero y llame a una funcion en la 
cual determine si un número es o no par. (La funcion debe devolver el valor)*/

#include <stdio.h>

using namespace std;

static bool esPar(int);

int main(int argc, char *argv[]) {
	int numero=0;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	if(esPar(numero)==true)
		printf("Par");
	else
		printf("Impar");
	return 0;
}

static bool esPar(int numero){
	if(numero%2==0)
		return true;
	else
		return false;
}
