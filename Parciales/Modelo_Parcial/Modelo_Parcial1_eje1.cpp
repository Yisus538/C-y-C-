/*
Ejercicio 1

Escriba un programa en C que lea un archivo de texto con datos de personas. Cada linea
 del archivo contiene los siguientes datos: Nombre, Apellido, Edad. 

El programa debe utilizar una estructura para almacenar los datos de cada persona.
La estructura debe tener los siguientes campos: nombre: char[25], apellido: char[25], edad: int

El programa debe utilizar punteros con funciones para realizar las siguientes tareas:
-Leer el archivo de texto y almacenar los datos en una estructura.
-Imprimir los datos de cada persona.
- Liberar la memoria reservada para las estructuras.
*/
#include <iostream>
#include <stdlib.h>

typedef struct Persona {
    char nombre[25];
    char apellido[25];
    int edad;
}Persona;

static void escanearArchivo(Persona **personas, int *totalPersonas);
static void mostrarDatos(const Persona *personas, int totalPersonas);
static void liberarMemoria(Persona *personas);

int main() {
   
    Persona *personas{nullptr}; 
    int totalPersonas = 0; 
    char opcion;

    do {
        printf("\n\tMenu\n");
        printf("a. Leer datos\n");
        printf("b. Imprimir los datos\n");
        printf("c. Liberar memoria\n");
        printf("d. Salir\n");
        printf("OPCION: ");
        scanf(" %c", &opcion);
        
        if(opcion!='d'){
            system("cls");
        }

        switch (opcion) {
            case 'a': 
                escanearArchivo(&personas, &totalPersonas); 
                system("pause");
                system("cls");
            break;
            case 'b': 
                mostrarDatos(personas, totalPersonas); 
                system("pause");
                system("cls");
            break;
            case 'c':
                liberarMemoria(personas);
            break;
            case 'd': break;
        }
    } while (opcion != 'd');

    system("pause");
    system("cls");
    return 0;
}
static void escanearArchivo(Persona **personas, int *totalPersonas) {
     
    FILE *archivo {fopen("personas.txt", "r")};

    if (archivo == nullptr) {
        perror("Error al abrir el archivo");
        exit(1);
    }else{
        *personas = (struct Persona *)malloc(sizeof(struct Persona));
        if (*personas == nullptr) {
            printf("Error al asignar memoria para las personas");
            exit(1);
        }

        while (fscanf(archivo, "%s %s %d",(*personas)[*totalPersonas].nombre,(*personas)[*totalPersonas].apellido,&(*personas)[*totalPersonas].edad) != EOF) {
            (*totalPersonas)++;
        }

        fclose(archivo);
    }

    
}
static void mostrarDatos(const Persona *personas, int totalPersonas) {  
    for (int i = 0; i < totalPersonas; i++) {
        printf("\n\nPersona %d:\n", i + 1);
        printf("Nombre: %s\n", personas[i].nombre);
        printf("Apellido: %s\n", personas[i].apellido);
        printf("Edad: %d\n", personas[i].edad);
    }
}
static void liberarMemoria(Persona *personas) {
    free(personas);
}
