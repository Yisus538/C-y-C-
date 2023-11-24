#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-multiway-paths-covered"
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
#pragma ide diagnostic ignored "cert-err34-c"
/* Una comuna organiza las ferias culturales todos los fin de semanas en donde se venden artesanias elaboradas
por los lugare�os, y se ofrecen shows y comidas al paso. La comuna se encarga de gestionar el evento separando 
por sectores, y en cada uno de ellos hay un puesto, ademas la comuna ofrece los servicios de luz, agua y ba�os 
quimicos es por ello que tiene un costo base de $1000. En caso de que se requiera mesa y silla se sumaran $500. 

Se pide generar una matriz (arreglo) de solicitudes de las personas que desean participar en la feria. 
Crear un menu de opciones con las siguientes funciones:

a. Registrar una solicitud. El N� de solicitud debera ser generado automaticamente y se solicitara que el usuario 
ingrese los siguientes datos: rubro al que pertenece (1-Artesanía, 2-Gastronomía o 3-Espectaculo), si requiere mesa 
o silla (0-No, 1-SI). Luego debera llamar a una funcion para calcular el monto a pagar y otra funcion para asignar 
el sector, los sectores deben ser consecutivos y no repetirse. En caso de que el rubro sea espectaculo se le asigna 
sector 0 que es el escenario. Por ejemplo: Lista de solicitudes.

N� Solicitud	Rubro	Requiere mesa/silla	Monto a pagar ($)*	N� Sector asignado*
1	1	1	1500	1
2	2	0	1000	2
3	3	0	1000	0
4	1	1	1500	3
5	3	0	1000	0
6	2	1	1500	4
* Estas columnas deben ser calculadas por el programa.

b. Mostrar la matriz de solicitudes

c. Mostrar la matriz de solicitudes por rubro de Espectáculo.

d. Calcular y sumar la recaudacion de la comuna con la feria.
*/

#include <cstdio>
using namespace std;

void registrar_solicitud(float [6][5]);
void mostrar_solicitudes(float [6][5]);
void mostrar_solicitudes_rubro(float [6][5]);
float calcular_recaudacion(float [6][5]);

int main() {
	
	float s[6][5] = {0};
	
	char op=' ';

	do{
		printf("FERIA DE LA COMUNA\n");
		printf("a. Registrar solicitud\nb. Mostrar Solicitudes\nc. Mostrar Solicitudes por rubro\nd. Recaudaci�n de la Comuna\n"); 
		scanf(" %c",&op);
		switch(op){
		case 'a': 
		case 'A': 
			registrar_solicitud(s);
			break;
		case 'b':
		case 'B': 
			mostrar_solicitudes(s);
			break;
		case 'c':
		case 'C': 
			mostrar_solicitudes_rubro(s);
			break;
		case 'd':
		case 'D': 
			printf("\n----------------------------------------------------------");
			printf("\nRecaudacion de la comuna $%0.2f.",calcular_recaudacion(s));
			printf("\n----------------------------------------------------------");
			break;
		}
		printf("\n\n�Desea seguir (S/N)?");
		scanf(" %c",&op);
		printf("\n");
		
	}while(op=='s' || op=='S');
	
	
	return 0;
}


void registrar_solicitud(float s[6][5]){
	int cont_sector=1;
	printf("\nRegistrar solicitudes\n");
	for(int i=0;i<6;i++){
        s[i][0]=i+1;
		printf("\nN� %0.0f",s[i][0]);
		printf("\nIngrese el rubro [1=Artesania 2=Gastronomia 3=Espectaculo]: ");
		scanf("%f",&s[i][1]);
		printf("\nIngrese si requiere mesa/silla [0=No 1=Si]: ");
		scanf("%f",&s[i][2]);
		if(s[i][2]==1){
			s[i][3]=1500;
		}else{
			s[i][3]=1000;
		}
	}
	//asignaci�n de sector
	for(int i=0;i<6;i++){
		if(s[i][1]!=3){
			s[i][4]= cont_sector;
			cont_sector++;
		}else{
			s[i][4]=0;
		}	
	}
}

void mostrar_solicitudes(float s[6][5]){

	printf("\n----------------------------------------------------------");
	printf("\nResumen Solicitudes\n");
	printf("N.\tRub.\tM/S\tMonto\tSec.\n");
	for(int i=0;i<6;i++){
		for(int j=0; j<5;j++){
			printf("%0.2f\t",s[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------------------------------------");
	
	
}

void mostrar_solicitudes_rubro(float s[6][5]){
	int rubro=0;
	printf("Ingrese el rubro [1=Artesania 2=Gastronomia 3=Espectaculo]: ");
	scanf("%d",&rubro);

	printf("\n----------------------------------------------------------");
	printf("\nResumen Solicitudes por Rubro %d\n", rubro);
	printf("N.\tM/S\tMonto\t\tSec.\n");
	for(int i=0;i<6;i++){
		if(s[i][1]==rubro){
			printf("%0.0f\t%0.0f\t%0.2f\t\t%0.0f\n",s[i][0],s[i][2],s[i][3],s[i][4]);
		}
	}
	printf("----------------------------------------------------------");

}

float calcular_recaudacion(float s[6][5]){

	float total=0;
	for(int i=0;i<6;i++){
		total=total+s[i][3]; //solo sumamos la columna 3 que son los montos a pagar
	}
	return total;
}

#pragma clang diagnostic pop