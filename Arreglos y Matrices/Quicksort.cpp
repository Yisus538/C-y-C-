#include <iostream>

void intercambiar(int&,int&);
int particionar(int[],int,int);
void quickSort(int[],int,int);
void imprimirArreglo(int[],int);

int main() {

    int arreglo[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    std::cout << "Arreglo original: ";
    imprimirArreglo(arreglo, tamano);

    quickSort(arreglo, 0, tamano - 1);

    std::cout << "Arreglo ordenado: ";
    imprimirArreglo(arreglo, tamano);

    return 0;
}
void imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        std::cout << arreglo[i] << " ";
    }
    std::cout << std::endl;
}
void quickSort(int arreglo[], int inicio, int fin) {
    if (inicio < fin) {
        int indicePivote = particionar(arreglo, inicio, fin);

        quickSort(arreglo, inicio, indicePivote - 1);
        quickSort(arreglo, indicePivote + 1, fin);
    }
}
int particionar(int arreglo[], int inicio, int fin){
    int pivote = arreglo[fin];
    int i = inicio - 1;

    for (int j = inicio; j <= fin - 1; j++) {
        if (arreglo[j] < pivote) {
            i++;
            intercambiar(arreglo[i], arreglo[j]);
        }
    }

    intercambiar(arreglo[i + 1], arreglo[fin]);
    return i + 1;
}
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}