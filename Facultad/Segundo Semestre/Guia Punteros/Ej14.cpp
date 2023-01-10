/* Desarrolle un programa que declare e inicialice un arreglo de 2x3 con valores
aleatorios. Luego mostrar los valores. 
Utilice punteros para realizar el ejercicio.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(int argc, char *argv[]) {
	int n[2][3]={0};
	
	srand(time(NULL));
	printf("Valores: \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			*(*(n+i)+j)=rand()%20+1;
			printf("%d\t",*(*(n+i)+j));
		}
		printf("\n");
	}
	
	return 0;
}

