/*Se tiene un vector de 5 elementos con valores numericos 
enteros. Luego mostrar los valores que estan en posiciones 
impares.
*/
#include <stdio.h>
#include <ctime>
#include<stdlib.h>


int main() {

	int i=0, v[5]={0}; // se igualan todas las posiciones a 0
	srand(time(NULL));
	printf("Lista de valores\n\n");
	for(i=0;i<5;i++){
		v[i]=rand()%99;
		printf("v[%d]=%d\n", i, v[i]);
	}
	//Mostrar
	printf("\n\nValores en posiciones impares\n\n");
	for(i=0;i<5;i++){
		if(i%2!=0)
			printf("v[%d]=%d\n", i, v[i]);
	}
	
	return 0;
}

