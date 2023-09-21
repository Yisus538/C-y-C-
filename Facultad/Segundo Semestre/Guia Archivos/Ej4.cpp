/*Escriba un programa que busque dentro del archivo el_quijote.txt la cantidad 
de veces que aparecen las palabras "Quijote", "Rocinante" y "Sancho". 
Recuerden descargar el archivo en el mismo lugar donde corren el programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

void CHECK_NULL(FILE *archivo);

int main() {

    FILE *archivo{fopen("el_quijote.txt", "r")}; 
    
    CHECK_NULL(archivo);

    char palabra[100];
    int contQuijote = 0,contRocinante = 0,contSancho = 0;

    while (fscanf(archivo, "%s", palabra) != EOF) {
        if (strcmp(palabra, "Quijote") == 0) {
            contQuijote++;
        } else if (strcmp(palabra, "Rocinante") == 0) {
            contRocinante++;
        } else if (strcmp(palabra, "Sancho") == 0) {
            contSancho++;
        }
    }

    fclose(archivo);

    printf("Cantidad de 'Quijote': %d\n", contQuijote);
    printf("Cantidad de 'Rocinante': %d\n", contRocinante);
    printf("Cantidad de 'Sancho': %d\n", contSancho);

    return 0;
}
void CHECK_NULL(FILE *archivo){
	if(archivo==nullptr){
		printf("Imposible abrir el archivo");
		exit(1);
	}
}