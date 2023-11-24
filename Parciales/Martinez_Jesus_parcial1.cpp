/*Diseñar y codificar un programa que permita el ingreso de las toneladas de 
trigo que se muelen en un mes durante un trimestre.  Luego crear un menú de 
opciones que  muestre los siguientes datos:

a. Total de toneladas de trigo molidos en un trimestre. 
b. Monto recaudado en un trimestre, siendo que un kilo cuesta $50. 
(1 tonelada = 1000 kg)
c. El número de mes que se molió más y cuántas toneladas se molieron.
d. El número de mes que se molió menor y cuántas toneladas se molieron.
e. Mostrar si la empresa cumplió con la meta de producir mas de 30000 paquetes 
de harina en un trimestre. Considerar que un paquete de harina es de 1 kg.

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int tonelada=0, i=0, opcion=0, total=0, monto=0, 
		mayor=0, menor=0, dia_mayor=0, dia_menor=0;
	char rta=' ';
	printf("\nIngrese las toneladas por mes del trimestre:\n");
	for(i=0; i<3;i++){
		printf("Mes %d: ", i+1);
		scanf("%d", &tonelada);
		total=total+tonelada; //total+=tonelada
		if(i==1){
			mayor=tonelada;
			dia_mayor=i+1;
			menor=tonelada;
			dia_menor=i+1;
		}else{
			if(tonelada>mayor){
				mayor=tonelada;
				dia_mayor=i+1;
			}
			if(tonelada<menor){
				menor=tonelada;
				dia_menor=i+1;
			}
		}
		
	}//cierre del for
	
	do{
		printf("Menu de opciones: \n");
		printf("1. Total de toneladas en un trimestre.\n");
		printf("2. Monto recaudado en el trimestre.\n");
		printf("3. Mes y cantidad de la mayor molienda.\n");
		printf("4. Mes y cantidad de la menor molienda.\n");
		printf("5. Cumplimiento de la meta de la empresa. Producir mas de 30000 paquetes.\n");
		scanf("%d", &opcion);
		switch(opcion){ //tipo de valor char o int
		case 1:
			printf("Total %d toneladas en un trimestre.\n", total);
			break;
		case 2:
			monto=total*1000*50;
			printf("Se recaudado %d en el trimestre.\n",monto);
			break;
		case 3:
			printf("La mayor molienda se dio en el mes %d y fue de %d toneladas.\n", dia_mayor, mayor);
			break;
		case 4:
			printf("La menor molienda se dio en el mes %d y fue de %d toneladas.\n", dia_menor, menor);
			break;
		case 5:
			//1000 kg. ---> 1 tonelada
			//30000 kg. --> 30 toneladas
			if(total>=30){
				printf("La empresa cumplio su meta.\n");
			}else{
				printf("La empresa NO cumplio su meta.\n");
			}
			break;
		}//cierre del switch 
		
		printf("Desea seguir s/n.\n");
		scanf(" %c", &rta);
		
	}while(rta=='s');
	return 0;
}

