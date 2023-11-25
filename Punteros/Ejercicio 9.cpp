/*Se tiene un vector de 10 elementos con valores numéricos enteros. 
Luego crear una funcion que muestre los valores que están en posiciones 
impares, y otra funcion con las posiciones pares
*/
#include <ctime>
#include <stdio.h>
#include <stdlib.h>


void mostrar_pos_pares(int*);
void mostrar_pos_impares(int*);

int main() {
	int v[10] = {0}, *ptr_v=&v[0];
	
	srand(time(NULL));
	for(int i=0;i<10;i++){
		*(ptr_v+i)=rand()%50;
		printf("Posicion [%d]=%d\n",i,*(ptr_v+i));
	}
	
	mostrar_pos_pares(ptr_v);
	mostrar_pos_impares(ptr_v);
	
	return 0;
}

void mostrar_pos_pares(int* ptr_v){
	printf("\n\nPosiciones Pares\n");
	for(int i=0;i<10;i++){
		if(i%2==0)
			printf("Posicion [%d]=%d\n",i,*(ptr_v+i));
	}
}

void mostrar_pos_impares(int* ptr_v){
	printf("\n\nPosiciones Impares\n");
	for(int i=0;i<10;i++){
		if(i%2!=0)
			printf("Posicion [%d]=%d\n",i,*(ptr_v+i));
	}
}
