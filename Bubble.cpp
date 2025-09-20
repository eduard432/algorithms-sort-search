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

void Bubble::recursivo(int arr[], int size, int i, int j, bool hasMadeSwap) {
    if (i >= size - 1 || !hasMadeSwap) {
        return;
    }

    if (j >= i) {
        recursivo(arr, size, i + 1, size - 1, hasMadeSwap);
        return;
    }

    if (arr[j] < arr[j - 1]) {
        int aux = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = aux;
        hasMadeSwap = true;
    }

    recursivo(arr, size, i, j - 1, hasMadeSwap);
}


void Bubble::bubbleSort4(int arr[], int size) {
    recursivo(arr, size, 0, size - 1, true);
}