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