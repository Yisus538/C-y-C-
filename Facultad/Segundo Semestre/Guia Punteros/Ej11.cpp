/*Realice un programa que permita cargar 10 números enteros en un 
vector. Luego utilizando punteros calcule el promedio de ellos. 
Finalmente mostrar todos los valores y su promedio utilizando punteros.
*/

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	int v[10] = {0}, *ptr_v=&v[0], sum=0, *p_sum=&sum;
	float prom=0, *p_prom=&prom;
	
	srand(time(NULL));
	printf("Valores\n\n");
	for(int i=0;i<10;i++){
		*(ptr_v+i)=rand()%50;
		printf("%d\n",*(ptr_v+i));
	}
	
	for(int i=0;i<10;i++){
		*p_sum+=*(ptr_v+i);
	}
	printf("\nSuma %d\n",*p_sum);
	*p_prom=*p_sum/(float)10;
	printf("\nPromedio %0.2f\n",*p_prom);
	
	
	return 0;
}

