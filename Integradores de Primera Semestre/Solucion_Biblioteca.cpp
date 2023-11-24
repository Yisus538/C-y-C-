/*En una biblioteca se desean gestionar los prestamos de libros, para ello el 
encargado posee una lista con todos los libros y los siguientes atributos: 
codigo, cantidad total, cantidad prestado y cantidad disponible.

Codigo  Cant_Total  Cant_prestado  Cant_disponible
1		100			50				50
2		100			10				190
...
	
Se solicita que el programa realice las siguientes funciones:
- Cargar los datos de los libros en un arreglo de 100 x 4 de manera automatica 
(uso de numeros aleatorios). La columna 0 es un cÃ³digo que se va aumentando en 
1 en 1, y para las columnas 1 y 3 se debe obtener un numero aleatorio entre el 
10 y 100. Y la columna 2 colocar 0 por defecto. (Como se muestra en la tabla 
anterior)
- Mostrar los datos registrados en el arreglo.
- Prestar libros. El cual debe mostrar la lista de libros disponibles y 
solicitar al usuario el codigo del libro y la cantidad de libros a pedir. 
Luego el sistema debe controlar que haya la cantidad disponible que se solicita, 
sino debera mostrar un mensaje "No hay suficientes libros del codigo x". 
Recordar agregar la comprobacion de libros disponibles, no se pueden prestar 
libros cuando si cantidad disponible es cero. Cuando se quiere terminar la 
operacion "prestar libros" el codigo es igual a cero (0). Finalmente el sistema 
muestra un resumen de los libros solicitados.
- Mostrar el libro mas solicitado.
*/

#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

void cargar(int [10][4]);
void mostrar(int [10][4]);
void prestar(int [10][4]);
int masSolicitado(int [10][4]);

int main(int argc, char *argv[]) {

	int biblioteca[10][4]={0};
	char op=' ';
	cargar(biblioteca);
	do{
		printf("\nMENU DE OPCIONES - BIBLIOTECA\n");
		printf("a. Prestar libros.\nb. Mostrar.\nc. Mas Prestado.\nIngrese una opción:");
		scanf(" %c",&op);
		switch(op){
		case 'a': 
		case 'A': 
			prestar(biblioteca);
			break;
		case 'b':
		case 'B': 
			mostrar(biblioteca);
			break;
		case 'c':
		case 'C': 
			printf("\nEl libro mas prestado es %d",masSolicitado(biblioteca));
			break;
		}
		printf("\n¿Desea seguir (S/N)?");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');
	return 0;
}

void cargar(int biblioteca[10][4]){
	int i=0;
	srand(time(NULL));
	for(i=0;i<10;i++){
		biblioteca[i][0]=i+1; //el codigo
		biblioteca[i][1]=rand()%6+5; //(hasta-desde+1)+desde
		biblioteca[i][2]=0;
		biblioteca[i][3]=biblioteca[i][1];
	}
}
	
void mostrar(int biblioteca[10][4]){
	int i=0, j=0;
	printf("\nSTOCK DE LIBROS\n");
	printf("\nCod.\tC.T.\tC.P.\tC.D.\n");
	for(i=0;i<10;i++){
		for(j=0;j<4;j++){
			printf("%d\t",biblioteca[i][j]);
		}
		printf("\n");
	}
}
	
void prestar(int biblioteca[10][4]){
	int codigo=0, cantidad=0, i=0, j=0, prestamo[10][2]={0};
	mostrar(biblioteca);
	printf("\nINGRESE LOS LIBROS A PEDIR\n");
	do{
		printf("Código: ");
		scanf("%d",&codigo);
		if(codigo!=0){
			printf("Cantidad: ");
			scanf("%d",&cantidad);
			if(biblioteca[codigo-1][3]>=cantidad){
				biblioteca[codigo-1][2]=biblioteca[codigo-1][2]+cantidad; //columna de prestado
				biblioteca[codigo-1][3]=biblioteca[codigo-1][3]-cantidad; //columna de disponible
				prestamo[i][0]=codigo;
				prestamo[i][1]=cantidad;
				i++;
			}else{
				printf("\nLo siento. No hay suficientes libros del código %d\n", codigo);
			}
		}
	}while(codigo!=0);
	printf("\nRESUMEN DE PRESTAMOS\nCod.\tCant.");
	for(j=0; j<i;j++){
		printf("\n%d\t%d",prestamo[j][0], prestamo[j][1]);
	}
}

int masSolicitado(int biblioteca[10][4]){
	int cod=0, mayor=0, i=0;
	for(i=0;i<10;i++){
		if(i==0){
			cod=biblioteca[i][0];
			mayor=biblioteca[i][2]; //columna de los prestados
		}else{
			if(mayor<biblioteca[i][2]){
				cod=biblioteca[i][0];
				mayor=biblioteca[i][2];
			}
		}
	}
	return cod;
}
