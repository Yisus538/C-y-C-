/* Se desea cargar en un vector una cantidad de saldos de 
proveedores, 50 como maximo. La carga finaliza con un saldo 
menor o igual a cero. Ademas, se pide:
a. Cantidad de saldos cargados.
b. Promedio de saldos.
c. Cantidad de saldos menores al promedio.
d. Cantidad de saldos mayores al promedio.
e. Calcular cuanto fue lo recaudado en el mes.
*/
#include <stdio.h>
#include <ctime>
#include<stdlib.h>


int main() {
	int i=0, cant=0, cant_menores=0, cant_mayores=0;
	float saldo=1, sum=0, prom=0, v[50]={0};
	char op=' ';
	
	printf("Ingrese saldos [Entre 0 y 50]: \n");
	while(saldo>0 && i<50){
		scanf("%f",&saldo);
		v[i]=saldo;
		sum=sum+v[i];
		i++; //Tiene que estar al final, xq sino se estarian sumando otros valores.
	}
			
	cant=i-1;
	prom=sum/(float)cant;
	
	do{
		printf("\nMenu\na. Cant. Saldos\nb. Prom. Saldos\nc. Cant. Saldos Menores al Prom.\nd. Cant. Saldos Mayores al Prom.\ne. Recaudacion Mensual\n");
		scanf(" %c",&op);
		switch(op){
		case 'a':
			printf("Cantidad de saldos cargados: %d",cant);
			break;
		case 'b':
			printf("\nPromedio de saldos: %0.2f",prom);
			break;
		case 'c':
			cant_menores=0;
			for(i=0;i<cant;i++){
				if(v[i]<prom)
					cant_menores++;
			}
			printf("\nCantidad de saldos menores al promedio: %d",cant_menores);
			break;
		case 'd':
			cant_mayores=0;
			for(i=0;i<cant;i++){
				if(v[i]>prom)
					cant_mayores++;
			}
			printf("\nCantidad de saldos menores al promedio: %d",cant_mayores);
			break;
		case 'e':
			printf("\nRecaudacion del mes: %0.2f",sum);
			break;
		}
	
		printf("\n¿Desea volver al menu (S/N)? ");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');  
	
	return 0;
}

