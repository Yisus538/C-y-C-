/*
    Desarrolle un programa para gestionar los envios de paquetes por servicio de correo postal.
    Para ello, declarar e inicializar el siguiente arreglo (5x6) con los siguiente datos:

    codigo de seguimiento,peso(gr)^2, codigo destino,codigo origen, estado,precio($)

    Desarrolle las siguientes funciones para:

    *Inicializar el arreglo. La columna 1 se completa con numeros consecutivos comenzando del 1. Las columnas
    de la 2 a la 6 con numeros aleatorios considerando que:

    EL peso puede variar entre 1 y 2000gr
    El codigo de destino y origen corresponden a codigos de localidades(1-cordoba,2-Villa carlos paz,3-alta gracia)
    Hay 3 estados posibles para un paquete: 1en proceso de entrega,2 entrega y 3 retrasado.
    El peeso se calcula dependiendo dell peso del paquete (1gr -> $100) y luego se le suma un costo fijo de $1000
    por gestiones administrativas(Realizar una funcion que calcular precio).


    * Mostrar un listado de paquetes pendientes de entregar por destino y proceso.
    * Calcular los proceentajes de paquetes entregados,pendientes, y en proceso
    * ordenar y mostrar los paquetes(ascendente o descendete) de acuerdo al peso.
    *
    * crea un menu de opciones poara que el usuario pueda realizar las diferentes accciones antes descritas
 */
//Librerias a implementar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Constantes, aclaro que van en mayuscula cuando una variable es constante por buena practica
#define FILAS 5
#define COLUMNAS 6

//Prototipo de funciones
void inicializar(int paquetes[FILAS][COLUMNAS]);
void mostrarPaquetesPendientes(int[FILAS][COLUMNAS]);
void calcularPorcentajes(int [FILAS][COLUMNAS]);
void ordenarPaquetesPorPeso(int[FILAS][COLUMNAS], int ascendente);
void mostrarMenu();

int main() {

    int paquetes[FILAS][COLUMNAS]; // arreglo(5x6)
    srand(time(NULL)); //comando para numeros aleatorios

    inicializar(paquetes);

    int opcion = 0;
    do {
        mostrarMenu();
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarPaquetesPendientes(paquetes);
                break;
            case 2:
                calcularPorcentajes(paquetes);
                break;
            case 3:
                printf("Seleccione el orden de los paquetes (1 - Ascendente, 0 - Descendente): ");
                int ascendente;
                scanf("%d", &ascendente);
                ordenarPaquetesPorPeso(paquetes, ascendente);
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}
//funcion para inicializar arreglo con numeros aleatorios
void inicializar(int paquetes[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; ++i) {
        paquetes[i][0] = i + 1; // Codigo de seguimiento
        paquetes[i][1] = rand() % 2000 + 1; // Peso
        paquetes[i][2] = rand() % 3 + 1;    // Codigo destino
        paquetes[i][3] = rand() % 3 + 1;    // Codigo origen
        paquetes[i][4] = rand() % 3 + 1;    // Estado
        paquetes[i][5] = paquetes[i][1] * 100 + 1000; // Precio
    }
}
//Funcion para mostrar paquetes mendientes
void mostrarPaquetesPendientes(int paquetes[FILAS][COLUMNAS]) {
    printf("\nListado de paquetes pendientes de entregar por destino y proceso:\n");
    printf("Codigo  Destino  Proceso\n");
    for (int i = 0; i < FILAS; ++i) {
        if (paquetes[i][4] == 1) {
            printf("%-8d%-9d%d\n", paquetes[i][0], paquetes[i][2], paquetes[i][4]);
        }
    }
    printf("\n");
}
//Funcion para calcular porcentaje
void calcularPorcentajes(int paquetes[FILAS][COLUMNAS]) {
    int entregados = 0, pendientes = 0, en_proceso = 0;

    for (int i = 0; i < FILAS; ++i) {
        if (paquetes[i][4] == 2) {
            entregados++;
        } else if (paquetes[i][4] == 1) {
            en_proceso++;
        } else {
            pendientes++;
        }
    }

    float total = entregados + pendientes + en_proceso;
    float porcentaje_entregados = (entregados / total) * 100;
    float porcentaje_pendientes = (pendientes / total) * 100;
    float porcentaje_en_proceso = (en_proceso / total) * 100;

    printf("\nPorcentaje de paquetes entregados: %.2f%%\n", porcentaje_entregados);
    printf("Porcentaje de paquetes pendientes: %.2f%%\n", porcentaje_pendientes);
    printf("Porcentaje de paquetes en proceso: %.2f%%\n\n", porcentaje_en_proceso);
}
//Funcion de ordenamiento por metodo burbuja
void ordenarPaquetesPorPeso(int paquetes[FILAS][COLUMNAS], int ascendente) {
    // Método de burbuja para ordenar los paquetes por peso
    for (int i = 0; i < FILAS - 1; ++i) {
        for (int j = 0; j < FILAS - i - 1; ++j) {
            if ((ascendente && paquetes[j][1] > paquetes[j + 1][1]) ||
                (!ascendente && paquetes[j][1] < paquetes[j + 1][1])) {
                for (int k = 0; k < COLUMNAS; ++k) {
                    int temp = paquetes[j][k];
                    paquetes[j][k] = paquetes[j + 1][k];
                    paquetes[j + 1][k] = temp;
                }
            }
        }
    }

    printf("\nPaquetes ordenados por peso:\n");
    printf("Codigo  Peso\n");
    for (int i = 0; i < FILAS; ++i) {
        printf("%-8d%d\n", paquetes[i][0], paquetes[i][1]);
    }
    printf("\n");
}
//MENU DE OPCIONES
void mostrarMenu() {
    printf("\n----- Menu -----\n");
    printf("1. Mostrar paquetes pendientes de entregar por destino y proceso.\n");
    printf("2. Calcular porcentajes de paquetes entregados, pendientes y en proceso.\n");
    printf("3. Ordenar y mostrar paquetes por peso.\n");
    printf("4. Salir.\n");
}

