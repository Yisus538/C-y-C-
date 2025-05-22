/*Escribir un programa que solicite los datos de un producto (nombre del 
producto, marca, precio unitario, fecha de elaboracion, tama�o) y lo guarde 
en un archivo de texto con el nombre "Datos_Producto.txt".*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Producto{
	char nombre[30], marca[10], fecha_elaboracion[20], tamanio[10];
	float precio_unitario;
}Producto;

void check_null(FILE*);

int main() {
	FILE* fp = fopen("Datos_Producto.txt", "w");
	check_null(fp);
	struct Producto p;
	printf("Nombre: ");
	scanf("%s",p.nombre);
	printf("Marca: ");
	scanf("%s",p.marca);
	printf("Precio Unirario: ");
	scanf("%f",&p.precio_unitario);
	printf("Fecha de Elaboracion: ");
	scanf("%s",p.fecha_elaboracion);
	printf("Tama�o: ");
	scanf("%s",p.tamanio);
	//grabo en el archivo
	fprintf(fp,"%s\n%s\n%f\n%s\n%s\n", p.nombre, p.marca, p.precio_unitario, p.fecha_elaboracion, p.tamanio);
	fclose(fp);
	
	//abrir y leer el archivo
	fp=fopen("Datos_Producto.txt","r");
	check_null(fp);
	while(!feof(fp)){
		fscanf(fp,"%s\n%s\n%f\n%s\n%s\n", &p.nombre, &p.marca, &p.precio_unitario, &p.fecha_elaboracion, &p.tamanio);
		printf("%s\n%s\n%f\n%s\n%s\n", p.nombre, p.marca, p.precio_unitario, p.fecha_elaboracion, p.tamanio);
	}
	fclose(fp);
	
	return 0;
}

void check_null(FILE* fp){
	if(fp==NULL){
		printf("Imposible abrir el archivo");
		exit(1);
	}
}
