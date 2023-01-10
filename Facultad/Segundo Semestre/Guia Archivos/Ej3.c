/*Escriba un programa que cree un menu de opciones que permita 
a) abrir un archivo, 
b) escribir un archivo, 
c) leer un archivo. 
*/

#include <stdio.h>
#include <stdlib.h>

void check_null(FILE *fp);

int main(int argc, char *argv[]) {
	FILE *fp=NULL;
	char opcion=' ', rta=' ';
	char cadena[1000];
	
	do
	{
		printf("Ingrese la opcion\na. Abrir un archivo\nb. Escribir un archivo\nc. Leer un archivo\n");
		scanf(" %c",&opcion);
		switch(opcion){
		case 'a':
		case 'A':
		{
			fp=fopen("archivo.txt","a");
			check_null(fp);
			printf("--------------APERTURA DEL ARCHIVO--------------\n");
			fclose(fp);
			break;
		}
		case 'b':
		case 'B':
		{
			fp=fopen("archivo.txt","w");
			check_null(fp);
			printf("--------------ESCRITURA DEL ARCHIVO--------------\n");
			scanf(" %[^\n]",cadena); // para que permita tomar los espacios y corte con el enter. Debe haber un espacio antes del %
			fprintf(fp,"%s",cadena);
			fclose(fp);
			break;
		}
		case 'c':
		case 'C':
		{
			printf("--------------LECTURA DEL ARCHIVO--------------\n");
			fp=fopen("archivo.txt","r");
			check_null(fp);
			while(!feof(fp))
			{
				fscanf(fp,"%s",cadena);
				printf("%s ",cadena);
			}
			fclose(fp);
			break;
		}
		}//cierra switch 
		printf("\n¿Quiere seguir operando? S/N\n");
		scanf(" %c",&rta);
	}while(rta=='s'|| rta=='S');
	return 0;
}

void check_null(FILE *fp){
	if(fp==NULL){
		printf("Imposible abrir el archivo");
		exit(1);
	}
}
