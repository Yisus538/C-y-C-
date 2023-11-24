/*Usted es contratado por la organizacion del evento Maraton Ciudad de Cordoba para realizar 
un programa en la cual se registren los siguientes datos: 
	Numero Corredor	      Tipo Prueba	         Tiempo (minutos)
	26

Tener en cuenta que las pruebas que se corren pueden ser de 3 km y 8 km,  los tiempos realizados 
estaran expresados en minutos. El programa debe preguntar cuantos corredores participaran y luego 
seran cargados a medida que lleguen a la meta. Una vez terminada la maraton deberian mostrar los 
siguientes resultados. 	
	- Mostrar el listado completo de participantes.	
	- Cantidad de participantes en la prueba 3km y la prueba 8 km.
	- Ganador con su respectivo tiempo y por prueba. (son 2)
*/

#include <stdio.h>

int cargar_datos(int v[100][3]);
void mostrar_listado(int v[100][3], int);
void calcular_cantidad(int v[100][3], int);
void calcular_ganadores(int v[100][3], int);

using namespace std;
int main(){
	int v[100][3]={0}, cant=0;
	cant=cargar_datos(v);
    mostrar_listado(v,cant);
	calcular_cantidad(v, cant);
	calcular_ganadores(v,cant);
    return 0;
    
}

int cargar_datos(int v[100][3]){
	int cant=0;
	printf("\nIngrese la cantidad de corredores: ");
	scanf("%d",&cant);
	for (int i = 0; i < cant; i++){
		printf("N° Corredor: ");
		scanf("%d", &v[i][0]);
		printf("Tipo prueba [3km - 8km]: ");
		scanf("%d",&v[i][1]);             
		printf("Tiempo [minutos]: ");
		scanf("%d",&v[i][2]);
	}
	return cant;
}

void mostrar_listado(int v[100][3],int cant){
     printf("\n\nN°\tPrueba\tTiempo [minutos]\n");
     for(int i = 0; i < cant; i++){
         for (int j = 0; j < 3; j++){
              printf("%d\t",v[i][j]);              
          }  
		 printf("\n");    
      }
}

void calcular_cantidad(int v[100][3],int cant){
	int cant_3=0, cant_8=0;
	for(int i = 0; i < cant; i++){
		if(v[i][1]==3)
			cant_3++;
		else
			cant_8++;
	}
	printf("\n\nCantidad Corredores en la Prueba de 3Km: %d",cant_3);
	printf("\nCantidad Corredores en la Prueba de 8Km: %d",cant_8);
}
	 

void calcular_ganadores(int v[100][3],int cant){	
	int ganador_3=0, ganador_8=0; //seria buscar el menor tiempo de cada prueba.
	int menor_tiempo_3=0, menor_tiempo_8=0;
	
	for(int i = 0; i < cant; i++){
		if(i==0){
			if(v[i][1]==3){
				menor_tiempo_3=v[i][2];
				ganador_3=v[i][0];
			}else{
				menor_tiempo_8=v[i][2];
				ganador_8=v[i][0];
			}
		}else{
			if((v[i][1]==3) && (v[i][2]<menor_tiempo_3)){
				menor_tiempo_3=v[i][2];
				ganador_3=v[i][0];
			}else{
				menor_tiempo_8=v[i][2];
				ganador_8=v[i][0];
			}
		}
	}
	printf("\n\nGanador de la carrera 3 km. N° Corredor: %d Tiempo: %d", ganador_3, menor_tiempo_3);
	printf("\nGanador de la carrera 8 km. N° Corredor: %d Tiempo: %d", ganador_8, menor_tiempo_8);
}
