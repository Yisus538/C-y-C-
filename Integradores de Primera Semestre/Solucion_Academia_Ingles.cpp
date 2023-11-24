/*En una academia de lenguas extranjeras, se tomaran los examenes de nivelacion para 
la ubicacion de los alumnos en el curso correspondiente de acuerdo a su nivel de idioma. 
Se tienen un arreglo, una columna con el numero de candidato y en otra columna la 
calificacion obtenida. Se desea obtener:
- Buscar el estudiante con mejor calificacion.
- Buscar el estudiante con peor calificacion. 
- Un listado ordenado por orden de merito de mayor a menor.
- Cantidad de estudiantes aprobados con 7 o mas, y cantidad de estudiantes desaprobados.

Una vez ordenada la lista, se procede a separar los grupos de alumnos en 3 niveles: 
Basico: notas entre 1 y 4
Intermedio: 5 y 7
Avanzado: 8 y 10.


En el caso, de que alguno de los cursos queda con un solo estudiante, el mismo debera 
pasar al otro curso, debido a que se considera de gran importancia el dialogo entre 
pares para el aprendizaje de un idioma. 

*/
#include <iostream>
#include <ctime>

void mostrar_notas(int nota[10][2]);
void buscar_nota_mayor(int nota[10][2]);
void buscar_nota_menor(int nota[10][2]);
void ordenar_por_notas(int nota[10][2]);
int contar_aprobados(int nota[10][2]);
int contar_desaprobados(int nota[10][2]);
void armar_grupos(int nota[10][2]);

using namespace std;

int main(int argc, char *argv[]) {
	int nota[10][2]={0}, i=0;
	char op=' ';
	
	srand(time(NULL));
	for(i=0;i<10;i++){
		nota[i][0]=i+1;
		nota[i][1]=rand()%10+1; //notas del 1 al 10
	}
	mostrar_notas(nota);
	do{
		
		printf("---------------MENU DE OPCIONES---------------\n");
		printf("a. Nota mas alta.\nb. Nota mas baja.\nc. Mostrar listado ordenado.\nd. Cantidad de estudiantes con 7 o mas, y cantidad de desaprobados\ne. Grupos\nIngrese opcion: ");
		scanf(" %c",&op);
		switch(op){
		case 'A': 
		case 'a': 
			printf("---------------------------------------------\n");
			buscar_nota_mayor(nota);
			break;
		case 'B': 
		case 'b':
			printf("---------------------------------------------\n");
			buscar_nota_menor(nota);
			break;
		case 'C': 
		case 'c':
			printf("---------------------------------------------\n");
			ordenar_por_notas(nota);
			break;
		case 'D': 
		case 'd':
			printf("---------------------------------------------\n");
			printf("\nCantidad de aprobados: %d.", contar_aprobados(nota));
			printf("\nCantidad de desaprobados: %d.", contar_desaprobados(nota));
			break;
		case 'E': 
		case 'e':
			printf("---------------------------------------------\n");
			armar_grupos(nota);
			break;
		}
		printf("\n\n¿Desea seguir (S/N)? ");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');
	
	
	return 0;
}

//funciones

void mostrar_notas(int nota[10][2]){
	int i=0, j=0;
	printf("Estudiante\tNota\n");
	for(i=0; i<10;i++){
		for(j=0; j<2;j++){
			printf("%d\t\t",nota[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
	
void buscar_nota_mayor(int nota[10][2]){
	int nota_mayor=0, estudiante_mayor=0, i=0;
	for(i=0;i<10;i++){
		if(i==0){
			estudiante_mayor=nota[i][0];
			nota_mayor=nota[i][1];
		}else{
			if(nota[i][1]>nota_mayor){
				estudiante_mayor=nota[i][0];
				nota_mayor=nota[i][1];
			}
		}
	}
	printf("\nEl estudiante %d tiene la nota mayor %d.", estudiante_mayor, nota_mayor);
}

void buscar_nota_menor(int nota[10][2]){
	int nota_menor=0, estudiante_menor=0, i=0;
	for(i=0;i<10;i++){
		if(i==0){
			estudiante_menor=nota[i][0];
			nota_menor=nota[i][1];
		}else{
			if(nota[i][1]<nota_menor){
				estudiante_menor=nota[i][0];
				nota_menor=nota[i][1];
			}
		}
	}
	printf("\nEl estudiante %d tiene la nota menor %d.", estudiante_menor, nota_menor);
}

void ordenar_por_notas(int nota[10][2]){
	//el ordenamiento se realiza en base a la columna 1.
	int i=0, j=0, aux_nota=0, aux_est=0;
	for (i=0; i<10-1; i++) { 
		for (j=0 ; j<10-1; j++) {
			if (nota[j][1] > nota[j+1][1]) {
				//cuando se intercambia el valor nota, tambien lo hace el estudiante
				aux_nota = nota[j][1]; 
				aux_est=nota[j][0];
				nota[j][1] = nota[j+1][1];
				nota[j][0] = nota[j+1][0];
				nota[j+1][1] = aux_nota;
				nota[j+1][0]=aux_est;
			}
		}
	}
	printf("\nNotas ordenadas\n");
	mostrar_notas(nota);
}

int contar_aprobados(int nota[10][2]){
	int cantidad=0, i=0;
	for(i=0; i<10;i++){
		if(nota[i][1]>=7)
			cantidad++;
	}
	return cantidad;
}

int contar_desaprobados(int nota[10][2]){
	int cantidad=0, i=0;
	for(i=0; i<10;i++){
		if(nota[i][1]<7)
			cantidad++;
	}
	return cantidad;
}

void armar_grupos(int nota[10][2]){
	//Basico: notas entre 1 y 4
	//Intermedio: 5 y 7
	//Avanzado: 8 y 10.
	ordenar_por_notas(nota);
	int basico[10]={0}, intermedio[10]={0}, avanzado[10]={0}, j=0, b=0, i=0, a=0;
	for(j=0;j<10;j++){
		if(nota[j][1]>=1 && nota[j][1]<=4){
			basico[b]=nota[j][0]; //guardamos el estudiante
			b++;
		}else{
			if(nota[j][1]>4 && nota[j][1]<=7){
				intermedio[i]=nota[j][0];
				i++;
			}else{
				avanzado[a]=nota[j][0];
				a++;
			}
		}
	}
	//cuando un estudiante queda solo en algun grupo
	if(b==1 && a==1){
		intermedio[i]=basico[0];
		i++;
		intermedio[i]=avanzado[0];
		i++;
		b=0;
		a=0;
	}else{
		if(b==1){
			intermedio[i]=basico[0];
			i++;
			b=0;
		}else{
			if(a==1){
				intermedio[i]=avanzado[0];
				i++;
				a=0;
			}else{
				if(i==1){
					avanzado[a]=intermedio[0];
					a++;
					i=0;
				}
			}
		}
	}

	
	//mostrar grupos
	printf("\nBasico [1-4]: ");
	for(j=0; j<b;j++){
		printf("%d - ", basico[j]);
	}
	printf("\nIntermedio [5-7]: ");
	for(j=0; j<i;j++){
		printf("%d - ", intermedio[j]);
	}
	printf("\nAvanzado [8-10]: ");
	for(j=0; j<a;j++){
		printf("%d - ", avanzado[j]);
	}
	
}
