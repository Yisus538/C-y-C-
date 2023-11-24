/*El area de Recursos Humanos de una importante cadena de supermercados solicita que realice 
un algoritmo para determinar el sueldo mensual de los N empleados, ademÃ¡s calcule cuanto pago 
la empresa al finalizar el mes.  Por otro lado, segÃºn el puesto del empleado sera el sueldo 
basico que le corresponde,  operario $15000, encargado $20000 y jefe $25000. 
El calculo del sueldo neto es: 

Sueldo  Sueldo       Jubilacion   Obra social   Presentismo  Antiguedad   Asignacion
Neto  = Basico (SB)- 16% de SB  - 6% de SB   +  10% de SB  + 100 x año + 1300 x hijo


Identifique que datos debera pedir esta calculadora para poder hacer el calculo del sueldo 
neto. Se solicita que el programa realice las siguientes funciones:
- void cargar(...). Cargar los datos registrados en un arreglo. 
- void calcularSueldos( ..). Calcular los sueldos de los empleados.
- void mostrarUnSueldo(...). Mostrar el recibo de sueldo para cada uno de los empleados. Por ejemplo:


*** RECIBO DE SUELDO N 1  MES JUNIO 2017 ***

Sueldo Basico: $15000
Jubilacion 16%: $2400
Obra Social 6%: $900
Sindicato 3%: $450
Presentismo 10%: $1500
Antiguedad: $500
Asignacion por hijo: $0
Sueldo Neto: $13250
*******************************************

- float calcularTotal(...). Calcular el pago total de sueldos que realizo la empresa.
- void mostrarResumen(..). Mostrar el resumen mensual. Por ejemplo: 

******************************* RESUMEN MENSUAL JUNIO 2017 **************************
S.B    Jubilacion   Obra Social Sindicato  Presentismo   Antiguedad  Asignacion por hijo  Sueldo Neto
15000  2400         900         450        1500          500         0                    13250
15000  2400         900         450        0             700         2600                 14550
20000  3200         1200        600        2000          600         3900                 21500
25000  4000         1500        750        2500          500         2600                 24350

Total de Sueldos: $73650
*************************************************************************************
*/



#include <iostream>
#include <ctime>

using namespace std;

void cargar_datos(float [10][9]);
void calcular_sueldo_neto(float [10][9]);
void mostrar_un_sueldo(float [10][9]);
float calcular_monto_total(float [10][9]);
void mostrar_resumen(float [10][9]);


int main(int argc, char *argv[]) {
	
	float sueldos[10][9]={0};
	char opcion=' ';
	srand(time(NULL));
	
	cargar_datos(sueldos);
	calcular_sueldo_neto(sueldos);
	
	do{
		printf("\nMENU DE OPCIONES\n");
		printf("A. Mostrar un sueldo\n");
		printf("B. Mostrar total de sueldos\n");
		printf("C. Mostrar resumen mensual\n");
		scanf(" %c",&opcion);
		switch(opcion){
		case 'a':
		case 'A':
			mostrar_un_sueldo(sueldos);
			break;
		case 'b':
		case 'B':
			printf("\nMonto total pagado en sueldos por la empresa: $%.2f\n",calcular_monto_total(sueldos));
			break;
		case 'c':
		case 'C':
			mostrar_resumen(sueldos);
			break;
		}
		
		printf("\n¿Desea seguir? s/n ");
		scanf(" %c",&opcion);
	} while(opcion=='s' || opcion=='S');
	
	return 0;
}


void cargar_datos(float sueldos[10][9]){
	//carga de datos: legajo, tipo cargo, antiguedad
	int i=0, cargo=0;
	for(i=0;i<10;i++)
	{ 
		//legajo
		sueldos[i][0]=i+1;
		//basico
		cargo=rand()%3+1; //tipo de cargo
		if(cargo==1){
			sueldos[i][1]=15000; //operario
		}else{
			if(cargo==2){
				sueldos[i][1]=20000; //encargado
			}else{
				sueldos[i][1]=25000; //gerente
			}
		}
		
		//antiguedad
		sueldos[i][6]=(rand()%29)*100;
		//cant de hijo
		sueldos[i][7]=(rand()%10)*1300;
	}
}
	
void calcular_sueldo_neto(float sueldos[10][9]){
	int i=0;
	for(i=0;i<10;i++){
		sueldos[i][2]=sueldos[i][1]*0.16; //jubilacion
		sueldos[i][3]=sueldos[i][1]*0.06; // obra social
		sueldos[i][4]=sueldos[i][1]*0.03; // sindicato
		
		if((rand()%2)==0) //selecciona si ha faltado o no. 0=no falto 1=si falto
			sueldos[i][5]=sueldos[i][1]*0.10; // presentismo 
		else
			sueldos[i][5]=0;
		sueldos[i][8]=sueldos[i][1]-sueldos[i][2]-sueldos[i][3]-sueldos[i][4]+sueldos[i][5]+sueldos[i][6]+sueldos[i][7];
	}
}

void mostrar_un_sueldo(float sueldos[10][9]){
	int i=0;
	float n=0;
	printf("Ingrese un numero de legajo: ");
	scanf("%f", &n);
	printf("\n\n*** RECIBO DE SUELDO N   MES JUNIO 2022 ***");
	for(i=0;i<10;i++){
		if(n==sueldos[i][0]){
			printf("\nLegajo: %.0f", sueldos[i][0]);
			printf("\nSueldo Basico: %.0f", sueldos[i][1]);
			printf("\nJubilacion 16%%: %.0f", sueldos[i][2]);
			printf("\nObra Social 6%%: %.0f", sueldos[i][3]);
			printf("\nSindicato 3%%: %.0f", sueldos[i][4]);
			printf("\nPresentismo 10%%: %.0f", sueldos[i][5]);
			printf("\nAntiguedad: %.0f", sueldos[i][6]);
			printf("\nAsignacion por hijo: %.0f", sueldos[i][7]);
			printf("\nSueldo Neto: %.0f", sueldos[i][8]);	
		}
	}
	printf("\n*******************************************\n\n");
}	
	
	
float calcular_monto_total(float sueldos[10][9]){
	int i=0;
	float total=0;
	for(i=0;i<10;i++){
		total=total+(sueldos[i][8]);
	}
	return total;
}

void mostrar_resumen(float sueldos[10][9]){
	int i=0, j=0;
	printf("\n******************************* RESUMEN MENSUAL JUNIO 2022 **************************\n");
	printf("\nLeg.\tS.B.\tJub.\tO.S.\tSind.\tPres.\tAnt.\tA.H.\tS.N.\n");
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			printf("%.0f\t", sueldos[i][j]);
		}
		printf("\n");
	}
}
