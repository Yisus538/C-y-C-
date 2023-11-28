/*Dise�ar y codificar un programa que permita gestionar los sueldos de los empleados 
en un arreglo 10x6 de dos dimensiones. Por ejemplo:

Legajo	Basico	Aportes	Obra Social	Antiguedad 	Sueldo Neto
1	
2			 	 	 
3			 	 	 
4			 	 	 
5	 	 	 	 	 
El programa tendria que calcular el sueldo neto de los empleados, para ello crear 
una funcion para tal fin: 
- El basico es segun el cargo que desempe�a. Operario: $100.000, Encargado: $180.000 y Gerente: $200.000 
- Descuentos al sueldo basico: Los aportes es el 16% del basico y La obra social es el 3% del basico. 
- La antiguedad se acredita al sueldo basico. Por cada a�o se suman $1000. 
- Calculo del sueldo neto es: basico-aporte-obra social+antiguedad

Luego crear un menu de opciones que muestre los siguientes datos por medio de funciones:

- Mostrar la cantidad de encargados. (Funcion retorna valor)
- Mostrar un listado de los operarios. (Funcion static void)
- Mostrar el monto total pagado en sueldos de la empresa. (Retorna valor)
- Mostrar un listado completo de la liquidez de los sueldos (Funcion void)

Nota: las notas pueden ser cargadas utilizando numeros aleatorios o carga manual.
*/

#include <iostream>
#include <ctime>
using namespace std;

static void cargar_datos(float [10][6]);
static void calcular_sueldo_neto(float [10][6]);
static int contar_encargado(float [10][6]);
static void mostrar_lista_operario(float [10][6]);
static float calcular_monto_total(float [10][6]);
static void mostrar_liquidez(float [10][6]);

int main(int argc, char *argv[]) {
	
	float sueldos[10][6]={0};
	char opcion=' ';
	srand(time(NULL));
	
	cargar_datos(sueldos);
	calcular_sueldo_neto(sueldos);
	
	do{
		printf("\nMENU DE OPCIONES\n");
		printf("A. Mostrar cantidad de encargados\n");
		printf("B. Mostrar listado de los operarios\n");
		printf("C. Mostrar el monto total pagado en sueldos de la empresa\n");
		printf("D. Mostrar listado completo de la liquidez de los sueldos\n");
		scanf(" %c",&opcion);
		switch(opcion){
		case 'a':
		case 'A':
			printf("\nCantidad de encargados: %d\n", contar_encargado(sueldos));
			break;
		case 'b':
		case 'B':
			mostrar_lista_operario(sueldos);
			break;
		case 'c':
		case 'C':
			printf("\nMonto total pagado en sueldos por la empresa: $%.2f\n",calcular_monto_total(sueldos));
			break;
		case 'd':
		case 'D':
			mostrar_liquidez(sueldos);
			break;
		}
		
		printf("\n�Desea seguir? s/n ");
		scanf(" %c",&opcion);
	} while(opcion=='s' || opcion=='S');
	
	
	return 0;
}

static void cargar_datos(float sueldos[10][6]){
	//carga de datos: legajo, tipo cargo, antiguedad
	int i=0, cargo=0;
	for(i=0;i<10;i++)
	{
		//legajo
		sueldos[i][0]=i+1;
		//basico
		cargo=rand()%3+1; //tipo de cargo
		if(cargo==1){
			sueldos[i][1]=100000; //operario
		}else{
			if(cargo==2){
				sueldos[i][1]=180000; //encargado
			}else{
				sueldos[i][1]=200000; //gerente
			}
		}
		//antiguedad
		sueldos[i][4]=(rand()%29)*1000;
	}
}

static void calcular_sueldo_neto(float sueldos[10][6]){
	int i=0;
	for(i=0;i<10;i++){
		sueldos[i][2]=sueldos[i][1]*0.16;
		sueldos[i][3]=sueldos[i][1]*0.03;
		sueldos[i][5]=sueldos[i][1]-sueldos[i][2]-sueldos[i][3]+sueldos[i][4];
	}
}
	
static int contar_encargado(float sueldos[10][6]){
	int i=0,cont=0;	
	for(i=0;i<10;i++){
		if(sueldos[i][1]==180000){
			cont++;
		}
	}
	return cont;
}
		
static void mostrar_lista_operario(float sueldos[10][6]){
	int i=0;
	printf("\nListado de operarios:\n");
	printf("Legajo\tBasico\tAportes\tObra S.\tAntig.\tSueldo Neto\n");
	for(i=0;i<10;i++){
		if(sueldos[i][1]==100000){
			printf("%.0f\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\n",sueldos[i][0],sueldos[i][1],sueldos[i][2],sueldos[i][3],sueldos[i][4],sueldos[i][5]);
		}
	}
}
			
static float calcular_monto_total(float sueldos[10][6]){
	int i=0;
	float total=0;
	for(i=0;i<10;i++){
		total=total+(sueldos[i][1]+sueldos[i][4]);
	}
	return total;
}
				
static void mostrar_liquidez(float sueldos[10][6]){
	int i=0, j=0;
	printf("\nLegajo\tBasico\tAportes\tObra S.\tAntig.\tSueldo Neto\n");
	for(i=0;i<10;i++){
		for(j=0;j<6;j++){
			printf("%.0f\t", sueldos[i][j]);
		}
		printf("\n");
	}
}
					
					
					
