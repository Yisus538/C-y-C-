/* Escriba un programa que cree un archivo llamado "pares.txt" que 
contenga los valores pares del 1 al 100. Luego abrir el archivo y mostrarlo.
*/

#include <stdio.h>
#include <stdlib.h>

void check_null(FILE*);

int main() {
	
	FILE *fp=NULL;
	int i=0, j=0, pares[50]={0};
	
	fp=fopen("pares.txt","w");
	check_null(fp);
	
	//cargamos el arreglo de pares con los pares
	for(i=1;i<=100;i++){
		if(i%2==0){
			pares[j]=i;
			j++;
		}
	}
	
	//copiamos los valores pares en el archivo
	for(i=0;i<j;i++) 
	{
		fprintf(fp,"%d\n", pares[i]);
	}
	fclose(fp);
	
	//abrir y leer el archivo
	fp=fopen("pares.txt","r");
	check_null(fp);
	i=0;
	while(!feof(fp))
	{
		fscanf(fp,"%d\n",&pares[i]);
		printf("%d\n",pares[i]);
		i++;
	}
	fclose(fp);
	
	return 0;
}

void check_null(FILE *fp){
	if(fp==NULL){
		printf("Imposible abrir el archivo");
		exit(1);
	}
}
