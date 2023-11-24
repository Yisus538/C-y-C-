/*Desarrollar un algoritmo que arme un arreglo de 10x10 de numeros 
aleatorios. Una vez cargado el arreglo, el programa debera
mostrar un menu de opciones: 
a.  calcular el promedio.
b.  solicitar un numero y buscar cuantas veces esta ese 
numero en el arreglo.
c. mostrar solo los valores pares
d. mostrar todos los valores. 
*/

#include <stdio.h>
#include <ctime>
#include<stdlib.h>

int main() {
	
	int v[10][10]={0}, i=0, j=0, num=0, cant=0, sum=0;
	char op=' ';
	srand(time(NULL));
	
	//Generacion del arreglo con numeros aleatorios
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			v[i][j] = rand() % 100+1;
		}
	}
	
	do{
	printf("MENU DE OPCIONES\n");
	printf("a. Promedio\nb. Buscar\nc. Mostrar Pares\nd. Mostrar\nIngrese una opción: ");
	scanf(" %c",&op);
	switch(op){
	case 'a': 
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				sum=sum+v[i][j];
			}
		}
		printf("\nPromedio: %d",sum/100);
		break;
	case 'b': 
		printf("\nIngrese el numero a buscar: ");
		scanf("%d",&num);
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				if(v[i][j]==num){
					cant++;
				}
			}
		}
		printf("\nCantidad de veces del numero %d: %d",num,cant);
		break;
	case 'c': 
		printf("\nNumeros Pares\n");
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				if(v[i][j]%2==0){
					printf("%d\t",v[i][j]);
				}else{
					printf("0\t");
				}
			}
			printf("\n");
		}
		break;
	case 'd': 
		printf("\nNumeros \n");
		for(i=0; i<10; i++){
			for(j=0; j<10; j++){
				printf("%d\t",v[i][j]);
			}
			printf("\n");
		}
		break;
	}
	
	printf("\n¿Desea seguir (S/N)? ");
	scanf(" %c",&op);
	
	}while(op=='s' || op=='S');
	
	return 0;
}

