/*Se tiene un arreglo de 10 valores rellenado por defecto o aleatoriamente 
entre el (65 al 90). Luego generar un menu de opciones con las siguientes 
funciones:
- sumar todos los valores.
- calcular el promedio. (reutilizar la funcion anterior)
- trasformar los numeros en letras.*/

#include <stdio.h>
#include <math.h>
#include <ctime>
#include <stdlib.h>


static int sumar(int [10]);
static float promediar(int [10]);
static void transformarALetra(int [10]);
static void mostrar(int [10]);

int main() {
	
	int v[10]={0};
	bool bandera_valido=false;
	char op=' ';
	srand(time(NULL)); 
	for(int i=0; i<10; i++){
		v[i] = rand() % 26 + 65;//(hasta-desde+1)+desde
	}
	mostrar(v);
	do{
		printf("\na. Suma\nb. Promedio\nc. Transformar a Letras\ns. Salir");
		printf("\n\nIngrese una opcion: ");
		do{
			scanf(" %c",&op);
			if(op=='a'||op=='b'||op=='c'||op=='s'){
				bandera_valido=true;
			}else{
				printf("\nDebe ingresar una opcion valida. \n");
				bandera_valido=false;
			}
			
		}while(bandera_valido==false);
		
		if(op!='s'){
			switch(op){
			case 'a': 
				printf("\nSuma: %d", sumar(v));
				break;
			case 'b': 
				printf("\nPromedio: %0.2f", promediar(v));
				break;
			case 'c': 
				transformarALetra(v);
				break;
			}
		}
	}while(op!='s');
	return 0;
}

static int sumar(int v[10]){
	int suma=0;
	for(int i=0; i<10; i++){
		suma=suma+v[i];
	}
	return suma; 
}
static float promediar(int v[10]){
	float promedio=sumar(v)/10;
	return promedio;
	
}
static void transformarALetra(int v[10]){
	printf("\nNumeros a Letras\n");
	for(int i=0; i<10; i++){
		printf(" %c\t", (char)v[i]);
	}
	printf("\n");
}
static void mostrar(int v[10]){
	printf("Vector\n");
	for(int i=0; i<10; i++){
		printf("%d\t",v[i]);
	}
	printf("\n");
}
