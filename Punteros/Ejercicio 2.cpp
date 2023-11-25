/*Cargar las 3 notas de un alumno como valores enteros. Luego mostrar el promedio teniendo 
en cuenta si tiene parte decimal.*/

#include <iostream>

int main() {
	int n1=0, n2=0,n3=0;
	float prom=0;
	printf("Ingrese las 3 notas:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	prom=(float)(n1+n2+n3)/3;
	printf("Promedio:%0.2f",prom);
	return 0;
}

