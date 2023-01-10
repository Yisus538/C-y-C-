/*En un club deportivo se desean gestionar los prestamos de elementos de deporte 
(pelotas, conos, aros, etc.), para ello el encargado posee un inventario con todos 
los elementos con los siguientes atributos: codigo, cantidad total, cantidad 
prestado y cantidad disponible. 

Codigo   Cant_Total    Cant_prestado    Cant_Disponible
1        100           50               50
2        200           10               180
...

Se solicita que el programa realice las siguientes funciones:
- Cargar los datos en un arreglo. En este caso la cant_prestado es cero, y la 
cant_disponible se completa automaticamente con la cant_Total.
- Prestar elementos. El cual debe mostrar el listado de elementos disponibles y 
solicitar al usuario el codigo del elemento y la cantidad a prestar. 
Tener en cuenta que no se puede prestar mas elementos que los disponibles. 
- Mostrar los datos registrados en el arreglo.

*/

#include <iostream>
#include <ctime>

using namespace std;

void cargar_datos(int [10][4]);
void prestar_elemento(int [10][4]);
void mostrar_stock(int [10][4]);

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int stock[10][4]={0};
	char op=' ';
	cargar_datos(stock);  
	
	do{
		
		printf("---------------MENU DE OPCIONES---------------\n");
		printf("a. Prestar un elemento.\nb. Mostrar.\nIngrese opcion: ");
		scanf(" %c",&op);
		switch(op){
		case 'A': 
		case 'a': 
			printf("---------------------------------------------\n");
			prestar_elemento(stock);
			break;
		case 'B': 
		case 'b':
			printf("---------------------------------------------\n");
			mostrar_stock(stock);
			break;
		}
		printf("\n\n¿Desea seguir (S/N)? ");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');
	
	return 0;
}

void cargar_datos(int stock[10][4]){
	int i=0;
	for(i=0;i<10;i++){
		stock[i][0]=i+1;
		stock[i][1]=rand()%100+1;
		stock[i][2]=0;
		stock[i][3]=stock[i][1]; //la 1era vez es lo mismo que el stock que hay
	}
}

//Prestar elementos. El cual debe mostrar el listado de elementos disponibles y 
//solicitar al usuario el codigo del elemento y la cantidad a prestar. 
//Tener en cuenta que no se puede prestar mas elementos que los disponibles. 	
	
void prestar_elemento(int stock[10][4]){
	int i=0, cod=0, cant=0;
	bool bandera=false;
	printf("Elementos disponibles\n");
	printf("Cod.\tTotal\tDispo.\n");
	for(i=0; i<10;i++){
		if(stock[i][2]<stock[i][1]){
			printf("%d\t%d\t%d\t%d\n",stock[i][0],stock[i][1],stock[i][3]);
		}
	}
	printf("\nIngrese el codigo: ");
	scanf("%d", &cod);
	printf("Ingrese la cantidad: ");
	scanf("%d", &cant);
	for(i=0; i<10;i++){
		if(stock[i][0]==cod){
			if(cant<=stock[i][3]){
				stock[i][3]=stock[i][3]-cant;
				stock[i][2]=stock[i][2]+cant;
				printf("Se prestaron %d del codigo %d\n", cant, cod);
				printf("Quedaron disponible %d.\n", stock[i][3]);
				bandera=true;
				break;
			}
		}
	}
	if(bandera!=true){
		printf("No hay stock suficiente\n");
	}
}

void mostrar_stock(int stock[10][4]){
	int i=0, j=0;
	printf("Cod.\tTotal\tPrest.\tDispo.\n");
	for(i=0; i<10;i++){
		for(j=0; j<4;j++){
			printf("%d\t",stock[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
