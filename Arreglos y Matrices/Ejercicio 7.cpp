/*Crear un programa que arme un arreglo de 5x5 de números aleatorios pares. 
Luego muestre el arreglo resultante.
*/

#include <stdio.h>
#include <ctime>
#include<stdlib.h>

int main() {
	int i=0, j=0, v[5][5]={0}, num=0;
	srand(time(NULL));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			do{
				num=rand()%99;
			}while(num%2!=0);
			v[i][j]=num;
		}
	}
	//mostrar
	printf("Matriz de 5x5 de numeros pares\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}

