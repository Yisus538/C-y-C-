/*Se desea cargar en un vector los saldos de proveedores. 
La cantidad de saldos es ingresada por el usuario (maximo 10). 
La carga finaliza con un saldo menor o igual a cero. 
Además, desarrolle las siguientes funciones para mostrar:
a. Cantidad de saldos cargados.
b. Promedio de saldos.
c. Cantidad de saldos menores al promedio.
d. Cantidad de saldos mayores al promedio.
e. Calcular cuánto fue lo recaudado en el mes.
Cada item es una funcion. Para recorrer el vector utilice punteros.
*/
#include <iostream>

void cant_saldos(int*);
void calcular_suma(int*, int*, int*);
void calcular_promedio(int*, int*, int*, float*);
void calcular_cant_ma(int*, int*, int*, float*);
void calcular_cant_me(int*, int*, int*, float*);


int main() {
	
	int v[10] = {0}, *ptr_v=v, sum=0, *p_sum=&sum;
	int cant=0, *p_cant=&cant, cant_me=0, *p_cant_me=&cant_me, cant_ma=0, *p_cant_ma=&cant_ma;
	float prom=0, *p_prom=&prom;
	bool bandera=true;
	
	printf("Ingrese los saldos [fin=0]:\n");
	do
	{
		scanf("%d", (ptr_v+*p_cant));
		if(*(ptr_v+*p_cant)!=0)
		{
			*p_cant+=1;
		}
		else
		{
			bandera=false;
		}
	}while(bandera==true && *p_cant<10);
	
	printf("\n\nValores: \n");
	for(int i=0;i<*p_cant;i++){
		printf("%d\n",*(ptr_v+i));
	}
	
	cant_saldos(p_cant);
	
	calcular_promedio(ptr_v, p_cant, p_sum, p_prom);
	calcular_cant_ma(ptr_v, p_cant, p_cant_ma, p_prom);
	calcular_cant_me(ptr_v, p_cant, p_cant_me, p_prom);
	calcular_suma(ptr_v, p_cant, p_sum);
	printf("\nRecaudación %d\n",*p_sum);
	return 0;
}

void cant_saldos(int* p_cant){
	printf("\nCantidad de saldo cargados: %d\n", *p_cant);
}

void calcular_suma(int* ptr_v, int* p_cant, int* p_sum){
	*p_sum=0;
	for(int i=0;i<*p_cant;i++){
		*p_sum+=*(ptr_v+i);
	}
}

void calcular_promedio(int* ptr_v, int* p_cant, int* p_sum, float* p_prom){
	calcular_suma(ptr_v, p_cant, p_sum);
	*p_prom=*p_sum/(float)(*p_cant);
	printf("\nPromedio %0.2f\n",*p_prom);
}

void calcular_cant_ma(int* ptr_v, int* p_cant, int* p_cant_ma, float* p_prom){
	for(int i=0;i<*p_cant;i++){
		if(*(ptr_v+i)>=*p_prom)
		{
			*p_cant_ma+=1;
			printf("%d\n",*(ptr_v+i));
		}
		
	}
	printf("\nCantidad de saldos mayores al promedio %d\n",*p_cant_ma);
}

void calcular_cant_me(int* ptr_v, int* p_cant, int* p_cant_me, float* p_prom){
	for(int i=0;i<*p_cant;i++){
 		if(*(ptr_v+i)<*p_prom)
		{
			*p_cant_me+=1;
			printf("%d\n",*(ptr_v+i));
		}
	}
	printf("\nCantidad de saldos menores al promedio %d\n",*p_cant_me);
}
