/*El gerente de una empresa de software quiere dar reconocimiento y otorgar 
incentivos a sus mejores programadores de acuerdo a su desempeño. Para ello 
fijo los siguientes criterios para calcular el incentivo: (crear una funcion 
por cada criterio)

a. Segun su antiguedad, es decir la cantidad de meses que esta programando. 
Por cada mes de antiguedad son $500.

b. Segun la cantidad de lenguajes de programacion con los que ha programado 
en el mes. Si programo:
- Menos o igual a 2 lenguajes su incentivo es de $4000.
- Mayor a 2 lenguajes es de $6000.

c. Segun la cantidad de lineas de codigo que ha programado en el mes. Una 
li­nea de codigo equivale a $100

d. Segun la cantidad de errores que ha introducido en el codigo en el mes. 
Dependiendo del tipo de error es la penalizacion (descuento) que tendra el 
incentivo.
- Por cada error de sintaxis se le descontara $100
- Por cada error de logica se le descontara $500

e. En el caso de que se el programador tenga mas o igual cantidad de errores 
que lineas de codigo escritas, el programador no tendra incentivo este mes. 

Crear un menu de opciones con las siguientes operaciones:
a. Cargar datos.
b. Mostrar un listado de los incentivos percibidos por los programadores. 
Por ejemplo:

LISTADO DE INCENTIVOS A LOS PROGRAMADORES - MES JULIO Año Actual
Nº Legajo	Incentivo por	Incentivo por		Incentivo por		Penalizacion por	Incentivo
Antiguedad		cant. lenguajes		cant. li­neas cod.	cant. errores		 total
(a)				(b)					(c)					(d)
1
2
3

3. Mostrar el total de incentivos pagados por la empresa.
4. Mostrar el mejor programador. Es quien tiene mas li­neas de codigo con menos 
errores.
5. Mostrar un listado de todos los incentivos totales. (un vector de una 
dimension de incentivo total).

*/

#include <stdio.h>
#include <ctime>

using namespace std;

#define MAX 10

void cargar_datos(float [MAX][7], int, int, int);

void calcular_incentivo_antiguedad(float [MAX][7], float [MAX][6], int);
void calcular_incentivo_lenguajes(float [MAX][7], float [MAX][6], int);
void calcular_incentivo_lineas(float [MAX][7], float [MAX][6], int);
void calcular_penalizacion_errores(float [MAX][7], float [MAX][6], int);
void calcular_incentivo_total_programador(float [MAX][7], float [MAX][6], int);
bool corresponde_incentivo(float [MAX][7], int);

void mostrar_matriz(float[MAX][6], int, int, int);
float calcular_total_incentivo(float[MAX][6], int);
float mejor_programador(float [MAX][7], int);
void mostrar_incentivo_vector(float[MAX][6], int, int, int);



int main(int argc, char *argv[]) {
	// para obtener la fecha actual del sistema
	time_t now =time(0); 
	tm *time = localtime(&now);
	int mes=time->tm_mon+1; //obtenemos el mes
	int anio=time->tm_year+1900; //obtenemos el año
	
	float matriz_datos[MAX][7]={0}; 
	//n_leg cant_meses cant_lenguajes cant_lineas cant_sintaxis cant_logica cant_errores_total
	float matriz_incentivo[MAX][6]={0};
	//n_leg. inc_antig. inc_leng. inc_linea penalizacion_error total
	
	char op = ' ';
	int tamanio=0;
	
	do{
		printf("\nMENU DE OPCIONES");
		printf("\na. Cargar datos.");
		printf("\nb. Mostrar listado de incentivos (arreglo).");
		printf("\nc. Total de incentivos pagados por la empresa.");
		printf("\nd. Mejor programador.");
		printf("\ne. Mostrar lista de solo incentivos. (vector)");
		printf("\nOpcion: ");
		scanf(" %c",&op);
		switch(op){
		case 'a': 
		case 'A': 
			printf("\nIngrese la cantidad de empleados: ");
			scanf("%d",&tamanio);
			cargar_datos(matriz_datos, tamanio, mes, anio);
			calcular_incentivo_antiguedad(matriz_datos, matriz_incentivo, tamanio);
			calcular_incentivo_lenguajes(matriz_datos, matriz_incentivo, tamanio);
			calcular_incentivo_lineas(matriz_datos, matriz_incentivo, tamanio);
			calcular_penalizacion_errores(matriz_datos, matriz_incentivo, tamanio);
			calcular_incentivo_total_programador(matriz_datos, matriz_incentivo, tamanio);
			
			break;
		case 'b': 
		case 'B': mostrar_matriz(matriz_incentivo, tamanio, mes, anio);
		break;
		case 'c': 
		case 'C': printf("\nTotal de incentivos pagados por la empresa: $%0.2f",calcular_total_incentivo(matriz_incentivo, tamanio));
		break;
		case 'd': 
		case 'D': printf("\nMejor programador: %0.0f",mejor_programador(matriz_datos, tamanio));
		break;
		case 'e': 
		case 'E': mostrar_incentivo_vector(matriz_incentivo, tamanio, mes, anio);
		break;
		}
		printf("\n¿Desea seguir (S/N)? ");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');
	
	return 0;
	
}

void cargar_datos(float matriz_datos[MAX][7], int tamanio, int mes, int anio){
	printf("\nCARGA DE DATOS DEL MES %d AÑO %d", mes, anio);
	for (int i=0; i<tamanio; i++){
		printf("\n\nLegajo %d: \n",(i+1));
		matriz_datos[i][0]=i+1;
		
		printf("Cantidad de meses que trabaja: ");
		scanf("%f",&matriz_datos[i][1]);
		
		printf("Cantidad de Lenguajes de programación: ");
		scanf("%f",&matriz_datos[i][2]);
		
		printf("Cantidad de lineas de codigo escritas: ");
		scanf("%f",&matriz_datos[i][3]);
		
		printf("Cantidad de errores de sintaxis: ");
		scanf("%f",&matriz_datos[i][4]);
		printf("Cantidad de errores logicos: ");
		scanf("%f",&matriz_datos[i][5]);
		matriz_datos[i][6]=matriz_datos[i][4]+matriz_datos[i][5];
	}
}
	
void calcular_incentivo_antiguedad(float matriz_datos[MAX][7], float matriz_incentivo[MAX][6], int tamanio){
	for (int i=0; i<tamanio; i++){
		matriz_incentivo[i][0]=matriz_datos[i][0];
		matriz_incentivo[i][1]=matriz_datos[i][1]*500;
	}
}
		
void calcular_incentivo_lenguajes(float matriz_datos[MAX][7], float matriz_incentivo[MAX][6], int tamanio){
	for (int i=0; i<tamanio; i++){
		if(matriz_datos[i][2]<=2){
			matriz_incentivo[i][2]=4000;
		}else{
			matriz_incentivo[i][2]=6000;
		}
	}
}
			
void calcular_incentivo_lineas(float matriz_datos[MAX][7], float matriz_incentivo[MAX][6], int tamanio){
	for (int i=0; i<tamanio; i++){
		matriz_incentivo[i][3]=matriz_datos[i][3]*100;
	}
}
				
void calcular_penalizacion_errores(float matriz_datos[MAX][7], float matriz_incentivo[MAX][6], int tamanio){
	for (int i=0; i<tamanio; i++){
		matriz_incentivo[i][4]=(matriz_datos[i][4]*100)+(matriz_datos[i][5]*500);
	}
}
					
void calcular_incentivo_total_programador(float matriz_datos[MAX][7], float matriz_incentivo[MAX][6], int tamanio){
	for (int i=0; i<tamanio; i++){
		if(corresponde_incentivo(matriz_datos, i)==true){
			matriz_incentivo[i][5]=matriz_incentivo[i][1]+matriz_incentivo[i][2]+matriz_incentivo[i][3]-matriz_incentivo[i][4];
		}else{
			matriz_incentivo[i][5]=0;
		}
	}
}
						
bool corresponde_incentivo(float matriz_datos[MAX][7], int legajo){
	bool tiene_incentivo=false;
	if(matriz_datos[legajo][3]>matriz_datos[legajo][6]){
		tiene_incentivo=true;
	}
	return tiene_incentivo;
}
							
void mostrar_matriz(float matriz_incentivo[MAX][6], int tamanio, int mes, int anio){
	printf("\nLISTADO DE INCENTIVOS A LOS PROGRAMADORES - MES %d Año %d", mes, anio);
	printf("\nN Leg.\tAntig.\tC.Leng.\tC.Linea\tError.\tTotal\n");
	for (int i=0; i<tamanio; i++){
		for (int j=0; j<6; j++){
			printf("%0.2f\t",matriz_incentivo[i][j]);
		}
		printf("\n");
	}
}
	
float calcular_total_incentivo(float matriz_incentivo[MAX][6], int tamanio){
	float total=0;
	for (int i=0; i<tamanio; i++){
		total=total+matriz_incentivo[i][5];
	}
	return total;
}
									
float mejor_programador(float matriz_datos[MAX][7], int tamanio){
	float mejor_programador=0, mejor_diferecia=0; 
	//lineas-errores =>el mayor valor es el mejor
	for (int i=0; i<tamanio; i++){
		if(i==0){
			mejor_programador=matriz_datos[i][0];
			mejor_diferecia=matriz_datos[i][3]-matriz_datos[i][6];
		}else{
			if(mejor_diferecia<(matriz_datos[i][3]-matriz_datos[i][6])){
				mejor_programador=matriz_datos[i][0];
				mejor_diferecia=matriz_datos[i][3]-matriz_datos[i][6];
			}
		}
	}
	return mejor_programador;
}
					

void mostrar_incentivo_vector(float matriz_incentivo[MAX][6], int tamanio, int mes, int anio){
	float vector_incentivo[MAX]={0};
	for (int i=0; i<tamanio; i++){
		vector_incentivo[i]=matriz_incentivo[i][5];
	}
	printf("\nLISTADO DE SOLO INCENTIVOS - MES %d AÑO %d", mes, anio);
		for (int i=0; i<tamanio; i++){
			printf("\n$%0.2f\t",vector_incentivo[i]);
		}
}
