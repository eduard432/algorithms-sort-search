#include "Swap.h"

// Swap 1
// Pequeño -> Grande
// Adelante -> Atras
void Swap::swapSort1(int arr[], int size) {
    int aux;
    // Podemos usar i <= size
    // Podemos usar i < size - 1
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

// Swap 2
// Grande -> Pequeño
// Adelante -> Atras
void Swap::swapSort2(int arr[], int size) {
    int aux;
    // Podemos usar i <= size
    // Podemos usar i < size - 1
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            // Solo invertimos el signo de comparación
            if(arr[i] < arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

// Swap 3
// Pequeño -> Grande
// Atras -> Adelante
void Swap::swapSort3(int arr[], int size) {
    int aux;
    for (int i = size - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            if(arr[i] < arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}

// Swap 4
// Grande -> Pequeño
// Atras -> Adelante
void Swap::swapSort4(int arr[], int size) {
    int aux;
    for (int i = size - 1; i > 0; i--) {
        for (int j = i - 1; j >= 0; j--) {
            // Solo invertimos el signo de comparación
            if(arr[i] > arr[j]) {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
}