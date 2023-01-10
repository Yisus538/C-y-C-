/*Las computadoras estan jugando un papel creciente en la educacion. 
Escriba un programa que ayudarÃa a un alumno a aprender a multiplicar. 
Utilice la funcion srand para generar dos numeros enteros positivos de 
un di­gito. A continuacion debera escribir una pregunta en pantalla, por ejemplo 
¿Cuanto es 6 veces 7?, luego escribe la respuesta el alumno. Las operaciones 
y resultados son almacenados en una matriz de 4 columnas y 5 filas.

Multiplicando   Multiplicador  Producto Alumno               Producto Correcto
6				7              (ingresado por el usuario)    (calculado por el programa)

Al finalizar las 5 preguntas, se verifican y se muestran en pantalla los 
resultados obtenidos. En caso de que el alumno cometio un error, mostrar el resultado correcto.

Por ultimo, calcular cuantas preguntas respondio correctamente el alumno, 
dependiendo la cantidad de respuestas correcta escribir el siguiente mensaje:

- 5 respuestas correctas. ¡Felicitaciones!
- Entre 3 y 4. ¡Bien!, Vas por buen camino.
- 2 o menos respuestas correctas. Hay que practicar mas.

*/

#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

void mostrarResultados(int [5][4]);
int contarCorrecta(int [5][4]);

int main(int argc, char *argv[]) {
	int pregunta[5][4]={0}, cant_correcta=0;
	srand(time(NULL));
	printf("PREGUNTAS\n");
	for(int i=0; i<5;i++){
		pregunta[i][0]=rand() % 10 + 1;
		pregunta[i][1]=rand() % 10 + 1;
		printf("%d * %d = ",pregunta[i][0], pregunta[i][1]);
		scanf("%d",&pregunta[i][2]);
		pregunta[i][3]=pregunta[i][0]*pregunta[i][1];		
	}
	
	mostrarResultados(pregunta);
	cant_correcta=contarCorrecta(pregunta);
	if(cant_correcta==5){
		printf("\n¡Felicitaciones!");
	}else{
		if(cant_correcta>=3 && cant_correcta<=4){
			printf("\n¡Bien!, Vas por buen camino.");
		}else{
			printf("\nHay que practicar mas.");
		}
		
	}
}

void mostrarResultados(int pregunta[5][4]){
	printf("\n\nRESULTADOS\n");
	for(int i=0; i<5;i++){
		if(pregunta[i][2]==pregunta[i][3]){
			printf("%d * %d = %d\tCorrecto \n",pregunta[i][0],pregunta[i][1],pregunta[i][2]);
		}else{
			printf("%d * %d = %d\tIncorrecto. Rta. %d\n",pregunta[i][0],pregunta[i][1],pregunta[i][2],pregunta[i][3]);
		}
	}
}

int contarCorrecta(int pregunta[5][4]){
	int cant_correcta=0;
	for(int i=0; i<5;i++){
		if(pregunta[i][2]==pregunta[i][3]){
			cant_correcta++;
		}
	}
	return cant_correcta;
}
