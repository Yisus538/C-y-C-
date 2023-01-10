/*Realice un programa que permita cargar 5 numeros enteros 
en un vector. Luego calcule el promedio de ellos. 
Finalmente mostrar todos los valores y su promedio.
*/

#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int i=0, sum=0, v[5]={0};
	float prom=0;
	printf("Ingrese los 5 valores \n");
	for(i=0;i<5;i++){
		scanf("%d",&v[i]);
	}
	
	printf("\nValores\n");
	for(i=0;i<5;i++){
			printf("v[%d]=%d\n",i, v[i]);
			sum=sum+v[i];
	}
	prom=(float)sum/5;
	printf("\nSumatoria: %d", sum);
	printf("\nPromedio: %0.2f", prom);
	
	return 0;
}

