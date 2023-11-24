/*Crear un arreglo de numeros enteros ramdon de 5x5.
	Luego crear un menu de opciones con las siguientes funciones:
	- Mostrar todos los valores.
	- Promedio de todos los valores del arreglo.
	- Buscar cuanto se repite un valor ingresado por el usuario.
	- Imprimir los valores pares
	- Sumar los valores impares.
	- Crear un arreglo de 25x2 e inicializar a cero (0), para guardar la frecuencia con que aparece un numero en el arreglo 5x5. 
		Luego mostrar la lista de frecuencia de los numeros.
	
	Num	Frecuencia
	6	1
	7	4
	...	... 
*/


#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

void mostrar(int [5][5]);
int promediar(int [5][5]);
int buscar_repetido(int [5][5]);
void imprimir_pares(int [5][5]);
int sumar_impares(int [5][5]);
void calcular_frecuencia(int [5][5]);

int main(int argc, char *argv[]) {
	
	srand(time(NULL)); 
	int v[5][5]={0}, i=0, j=0, rta_repetido=0;
	char op =' ';
	//llenado del arreglo con numeros ramdon del 1 al 20.
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			v[i][j] = rand() % 20+1;
		}
	}
	
	do{
		printf("ARREGLOS Y FUNCIONES\n");
		printf("a. Mostrar\nb. Promedio\nc. Buscar Repetido\nd. Mostrar Pares\ne. Suma impares\nf. Frecuencia\n"); 
		scanf(" %c",&op);
		switch(op){
		case 'a': 
		case 'A': 
			mostrar(v);
			break;
		case 'b':
		case 'B': 
			printf("\nPromedio: %d\n",promediar(v));
			break;
		case 'c':
		case 'C': 
			rta_repetido=buscar_repetido(v);
			if(rta_repetido==0){
				printf("\nValor no encontrado. \n");
			}else{
				printf("\nValor encontrado. Repetido: %d\n",rta_repetido);
			}
			break;
		case 'd':
		case 'D': 
			imprimir_pares(v);
			break;
		case 'e':
		case 'E': 
			printf("\nSuma impares: %d\n",sumar_impares(v));
			break;
		case 'f':
		case 'F': 
			calcular_frecuencia(v);
			break;
		}
		printf("\n\n¿Desea seguir (S/N)?");
		scanf(" %c",&op);
		printf("\n");
		
	}while(op=='s' || op=='S');
	
	return 0;
}

void mostrar(int v[5][5]){
	int i=0, j=0;
	printf("\nValores Arreglo\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d\t",v[i][j]);
		}
		printf("\n");
	}
}
	
int promediar(int v[5][5]){
	int i=0, j=0, sum=0, prom=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			sum=sum+v[i][j];
		}
	}
	prom=sum/25;
	return prom;
}

void imprimir_pares(int v[5][5]){
	int i=0, j=0;
	printf("\nNumeros Pares\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(v[i][j]%2==0){
				printf("%d\t",v[i][j]);
			}else{
				printf("-\t");
			}
		}
		printf("\n");
	}
}

	
int sumar_impares(int v[5][5]){
	int i=0, j=0, sum_impares=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(v[i][j]%2!=0){
				sum_impares=sum_impares+v[i][j];
			}
		}
	}
	return sum_impares;
}

int buscar_repetido(int v[5][5]){
	int i=0, j=0, clave=0, repetido=0;
	printf("\nValores Repetidos\nIngrese el valor a buscar: ");
	scanf("%d",&clave);
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(v[i][j]==clave){
				repetido++;
			}
		}
	}
	return repetido;
}

void calcular_frecuencia(int v[5][5]){
	int f[25][2]={0}, i=0, j=0, k=0,cont=0;
	bool bandera=false;
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			bandera=false;
			for(k=0;k<25;k++){
				if(v[i][j]==f[k][0]){
					f[k][1]=f[k][1]+1;
					bandera=true;
				}
			}
			if(bandera==false){
				f[cont][0]=v[i][j];
				f[cont][1]=1;
				cont++;
			}
		}
	}
	//Mostrar frecuencia
	printf("\nFrecuencia de valores\n");
	for(i=0; i<25; i++){
		for(j=0; j<2; j++){
			if(f[i][j]!=0){ //muestra solo las filas que tienen valores.
				printf("%d\t",f[i][j]);
			}
		}
		printf("\n");
	}
}	

	
	
