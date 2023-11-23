/*
Desarrolle un programa que permita gestionar los datos de estudiantes de una escuela. Para ello debes definir una estructura llamada Estudiante que almacene la siguiente informacion: numero de identificacion (entero), nombre (cadena de caracteres), notas (arreglo de decimales) y promedio (flotante). Implemente las siguientes funciones: 

-Que permita al usuario ingresar datos de un estudiante y calcular su promedio. 
La funcion debe tomar como parametros un puntero a una estructura Estudiante y solicitar
 al usuario el nombre, el id y las notas. Luego, debe calcular y almacenar el promedio en la estructura.

- Que tome como entrada un arreglo de estructuras Estudiante y su tamanio, y que guarde 
estos datos en un archivo de texto llamado "estudiantes.txt". Cada linea del archivo debe
 contener la informacion de un estudiante en el siguiente formato: "ID, Nombre, Nota 1, Nota 2,
  Nota 3, Promedio".

- Que permita buscar y mostrar los datos de un estudiante en particular segun su id. 
La funcion debe tomar como parametros el id a buscar y el arreglo de estructuras de estudiantes.
 Si se encuentra el estudiante, muestra sus datos.

Implementa una funcion principal (main) que permita al usuario realizar las siguientes operaciones
 con un menu de opciones.

a. Registrar un nuevo estudiante y guardar sus datos en el archivo "estudiantes.txt".
b. Buscar y mostrar los datos de un estudiante por id.
c. Salir.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudiante {
    int id;
    char nombre[50];
    float *notas;
    float promedio;
};
void ingresarEstudiante(struct Estudiante *estudiante) {
   
    printf("Ingrese el ID del estudiante: ");
    scanf("%d", &(estudiante->id));
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", estudiante->nombre);

    estudiante->notas = (float *)malloc(3 * sizeof(float));

    printf("Ingrese las notas del estudiante (3 notas separadas por espacios): ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &(estudiante->notas[i]));
    }

    estudiante->promedio = 0;
    for (int i = 0; i < 3; i++) {
        estudiante->promedio += estudiante->notas[i];
    }
    estudiante->promedio /= 3;
}

void liberarEstudiante(struct Estudiante *estudiante) {
    free(estudiante->notas);
}
void guardarEstudiantes(struct Estudiante estudiantes[], int numEstudiantes) {
    FILE *archivo = fopen("estudiantes.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    for (int i = 0; i < numEstudiantes; i++) {
        fprintf(archivo, "%d, %s, %.2f, %.2f, %.2f, %.2f\n",
                estudiantes[i].id, estudiantes[i].nombre,
                estudiantes[i].notas[0], estudiantes[i].notas[1], estudiantes[i].notas[2], estudiantes[i].promedio);
    }

    fclose(archivo);
    printf("Datos de estudiantes guardados en 'estudiantes.txt'.\n");
}
void buscarEstudiantePorId(int idBuscar, struct Estudiante estudiantes[], int numEstudiantes) {
    
    for (int i = 0; i < numEstudiantes; i++) {
        if (estudiantes[i].id == idBuscar) {
            printf("ID: %d\n", estudiantes[i].id);
            printf("Nombre: %s\n", estudiantes[i].nombre);
            printf("Notas: %.2f, %.2f, %.2f\n", estudiantes[i].notas[0], estudiantes[i].notas[1], estudiantes[i].notas[2]);
            printf("Promedio: %.2f\n", estudiantes[i].promedio);
            return;
        }
    }

    printf("Estudiante con ID %d no encontrado.\n", idBuscar);
}

int main() {
    
    int opcion;
    int numEstudiantes = 0;
    struct Estudiante *estudiantes ; 
    
    do {
        printf("\nMenú de opciones:\n");
        printf("1. Registrar un nuevo estudiante y guardar sus datos.\n");
        printf("2. Buscar y mostrar los datos de un estudiante por ID.\n");
        printf("3. Salir.\n");
        printf("Ingrese su elección: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                if (numEstudiantes < 100) {
                    estudiantes = (struct Estudiante *)realloc(estudiantes, (numEstudiantes + 1) * sizeof(struct Estudiante));
                    ingresarEstudiante(&estudiantes[numEstudiantes]);
                    numEstudiantes++;
                } else {
                    printf("Se ha alcanzado el límite de estudiantes.\n");
                }
                break;
            case 2:
                if (numEstudiantes > 0) {
                    int idBuscar;
                    printf("Ingrese el ID del estudiante a buscar: ");
                    scanf("%d", &idBuscar);
                    buscarEstudiantePorId(idBuscar, estudiantes, numEstudiantes);
                } else {
                    printf("No hay estudiantes registrados.\n");
                }
                break;
            case 3:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);


    for (int i = 0; i < numEstudiantes; i++) {
        liberarEstudiante(&estudiantes[i]);
    }
    free(estudiantes);

    if (numEstudiantes > 0) {
        guardarEstudiantes(estudiantes, numEstudiantes);
    }

    return 0;
}
