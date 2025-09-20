#include "Bubble.h"
#include <iostream>


void Bubble::bubbleSort1(int arr[], int size) {
    int aux;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

// Lo mismo que la versión anterior pero realiza menos operaciones
void Bubble::bubbleSort2(int arr[], int size) {
    int aux;
    bool hasMadeSwap = true;
    for (int i = 0; i < size - 1 && hasMadeSwap; i++) {
        hasMadeSwap = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                hasMadeSwap = true;
            }
        }
    }
}

// Al revés, va poniendo el más pequeño al inicio
void Bubble::bubbleSort3(int arr[], int size) {
    int aux;
    bool hasMadeSwap = true;
    for (int i = 0; i < size - 1 && hasMadeSwap; i++) {
        hasMadeSwap = false;
        for (int j = size - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                aux = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = aux;
                hasMadeSwap = true;
            }
        }
    }
}

// Bubble sort recursivo, muy mal optimizado (hace muchas pasadas)
void Bubble::recursivo1(int arr[], int size, int i, int j) {
    if (i > size - 1) {
        return;
    }

    if (j > size - 1 - i) {
        recursivo1(arr, size, i + 1, 0);
        return;
    }
    

    if (arr[j] > arr[j + 1]) {
        int aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
    }

    recursivo1(arr, size, i, j + 1);
}


void Bubble::bubbleSort4(int arr[], int size) {
    recursivo1(arr, size, 0, size - 1);
}

// Bubble sort hibrido: recursivo/iterativo
// Recursividad bucle externo
// Iteratividad bucle interno
// Usamos el int size como la i del bucle externo
void Bubble::bubbleSort5(int arr[], int size) {
    if (size == 1) return;

    bool hasMadeSwap = false;
    for (int j = 0; j < size - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            int aux = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = aux;
            hasMadeSwap = true;
        }
    }
    if(!hasMadeSwap) return;


    bubbleSort5(arr, size - 1);
}