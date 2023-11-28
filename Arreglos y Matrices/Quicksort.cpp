
#include <iostream>

// Función para intercambiar dos elementos en un array
void intercambiar(int&,int&);
int particion(int[],int,int);
void quicksort(int[],int,int);

int main() {

    int arr[] = {12, 7, 3, 1, 5, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Arreglo: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    quicksort(arr, 0, n - 1);

    std::cout << "\nArreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
void quicksort(int arr[], int bajo, int alto) {
    if (bajo < alto) {
        int indicePivote = particion(arr, bajo, alto);

        quicksort(arr, bajo, indicePivote - 1);
        quicksort(arr, indicePivote + 1, alto);
    }
}
int particion(int arr[], int bajo, int alto) {

    int pivote = arr[alto];
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (arr[j] <= pivote) {
            i++;
            intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[alto]);
    return i + 1;
}
void intercambiar(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}