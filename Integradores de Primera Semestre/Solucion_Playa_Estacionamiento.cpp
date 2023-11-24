/*Una playa de estacionamiento, con una capacidad de 10 lugares, desea gestionar 
las estadias de los vehiculos. Para ello se solicita que genere un menu de 
opciones con las distintas operaciones del negocio.

a. Registrar la estadia de un vehiculo. Por cada auto se registran los tres numeros de su patente, 
la cantidad de minutos de estacionamiento.

Lugar en playa   Patente     Cant. min.      Importe 
1                502         50
2                200         120

b. Generar ticket. En esta funcion se solicita buscar por patente del cliente, llamar a la funcion
calcular importe siendo que el costo por hora es de $150 y finalmente mostrar el ticket:

TICKET
Playa: 1  
Patente: 502      
Tiempo: 50 min     
Importe: $ 125       

Con cuanto va abonar? $150                                
Vuelto: $25

Notese, que el sistema pregunta con cuanto va abonar el cliente, y
calcula el vuelto.

c. Mostrar el listado de estadi­as y el monto recaudado en el dia por la playa.  

*/

#include <iostream>
using namespace std;

void mostrar(float[10][4]);
void registrar_estadia(float[10][4]);
void calcular_importe(float[10][4], int);
void mostrar_estadias_no_pagadas(float[10][4]);
void generar_ticket(float[10][4]);
float calcular_recaudacion(float[10][4]);

int main(int argc, char *argv[]) {
	float playa[10][4]={0}; //tiene 5 lugares
	char op = ' ';

	do{
		printf("MENU DE OPCIONES");
		printf("\na. Registrar estadia.");
		printf("\nb. Generar ticket.");
		printf("\nc. Mostrar resumen y recaudacion.");
		printf("\nOpcion: ");
		scanf(" %c",&op);
		switch(op){
		case 'a': 
			registrar_estadia(playa);
			break;
		case 'b': 
			generar_ticket(playa);
			break;
		case 'c': 
			mostrar(playa);
			printf("Recaudacion: $%0.2f", calcular_recaudacion(playa));
			printf("\n-----------------------------------\n");
			break;
		}
		printf("\n¿Desea seguir (S/N)? ");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');
	return 0;
}

void mostrar(float playa[10][4]){
	int i=0;
	printf("\n-----------------------------------\n");
	printf("\nLug.\tPat.\tC.Min\tImp.($)\n");
	for (i=0; i<10; i++){
		if(playa[i][0]!=0){
			printf("%0.0f\t%0.0f\t%0.0f\t%0.2f\n", playa[i][0], playa[i][1], playa[i][2], playa[i][3]);
		}
	}
	printf("\n-----------------------------------\n");
}
	
	
void registrar_estadia(float playa[10][4]){
	int i=0, lugar_desocupado=0;
	printf("\nRegistrar estadia");
	//buscar el primer lugar de playa desocupado
	for (i=0; i<10; i++){
		if(playa[i][0]==0){
			lugar_desocupado=i;
			break;
		}
	}
	playa[lugar_desocupado][0]=lugar_desocupado+1;
	printf("\nLugar %0.0f: \n", playa[lugar_desocupado][0]);
	printf("Patente: ");
	scanf("%f",&playa[lugar_desocupado][1]);
	printf("Estadia [min]: ");
	scanf("%f",&playa[lugar_desocupado][2]);
}

void generar_ticket(float playa[10][4]){
	int patente=0;
	float pago=0, vuelto=0;
	mostrar_estadias_no_pagadas(playa);
	printf("\nIngrese la patente para imprimir su ticket: ");
	scanf("%d",&patente);
	calcular_importe(playa, patente);
	for (int i=0; i<10; i++){
		if(patente==playa[i][1]){
			printf("\n-----------------------------------\nTICKET");
			printf("\nPlaya: %0.0f", playa[i][0]);
			printf("\nPatente: %0.0f", playa[i][1]);
			printf("\nTiempo: %0.0f min.", playa[i][2]);
			printf("\nImporte: $%0.2f", playa[i][3]);
			printf("\n-----------------------------------\n");
			printf("\n¿Con Cuanto va abonar?");
			scanf("%f", &pago);
			vuelto=pago-playa[i][3];
			if(vuelto>0){
				printf("\nSu vuelto es de $%0.2f.", vuelto);
			}
			printf("\n-----------------------------------\n");
		}
		
	}
}
void mostrar_estadias_no_pagadas(float playa[10][4]){
	int i=0;
	printf("\n--------------ESTADIAS NO PAGADAS---------------------\n");
	printf("\nLug.\tPat.\n");
	for (i=0; i<10; i++){
		if(playa[i][3]==0 && playa[i][0]!=0){
			printf("%0.0f\t%0.0f\n", playa[i][0], playa[i][1]);
		}
	}
	printf("\n-----------------------------------\n");
	
}
	
void calcular_importe(float playa[10][4], int patente){
	int i=0;
	for (i=0; i<10; i++){
		if(playa[i][1]==patente){
			playa[i][3]=playa[i][2]*2.5;  //$150 la hora.
		}
	}
}
	
float calcular_recaudacion(float playa[10][4]){
	float total=0;
	for (int i=0; i<10; i++){
		total=total+playa[i][3];
	}
	return  total;
}
