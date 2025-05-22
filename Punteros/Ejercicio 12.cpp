/* Desarrolle un programa que declare e inicialice un vector de 5 valores aleatorios. 
Luego, crear 3 funciones que permita hallar el valor maximo, minimo y el sumatoria de 
ellos. Finalmente mostrar los resultados. 
Utilice punteros para realizar el ejercicio.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

void buscarMaximo(int*, int*);
void buscarMinimo(int*, int*);
void calcularSumatoria(int*, int*);

int main() {
	int v[5]={0};
	int* ptr_v=v;
	
	srand(time(NULL));
	printf("Valores: \n");
	for(int i=0;i<5;i++){
		*(ptr_v+i)=rand()%50+1;
		printf("%d\t",*(ptr_v+i));
	}
	
	int max=0, min=0, sum=0;
	int* ptr_max=&max, *ptr_min=&min, *ptr_sum=&sum;	

	buscarMaximo(ptr_v, ptr_max);
	buscarMinimo(ptr_v, ptr_min);
	calcularSumatoria(ptr_v, ptr_sum);
	
	printf("\n\nRESULTADOS:\n");
	printf("Maximo: %d\n", *ptr_max);
	printf("Minimo: %d\n", *ptr_min);
	printf("Sumatoria: %d\n", *ptr_sum);
	return 0;
}

void buscarMaximo(int* ptr_v, int* ptr_max){
	for(int i=0;i<5;i++){
		if(i==0){
			*ptr_max=*ptr_v; 
		}else {
			if(*ptr_v>*ptr_max)
				*ptr_max=*ptr_v;
		}
		ptr_v++;
	}
}

void buscarMinimo(int* ptr_v, int* ptr_min){
	for(int i=0;i<5;i++){
		if(i==0){
			*ptr_min=*ptr_v; 
		}else {
			if(*ptr_v<*ptr_min)
				*ptr_min=*ptr_v;
		}
		ptr_v++;
	}
}

void calcularSumatoria(int* ptr_v, int* ptr_sum){
	for(int i=0;i<5;i++){
		*ptr_sum+=*ptr_v;
		ptr_v++;
	}
}
