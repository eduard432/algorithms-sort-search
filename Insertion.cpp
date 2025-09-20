#include "Insertion.h"
#include "Utils.h"
#include <iostream>

void Insertion::insertionSort1(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int aux = arr[i];
        int j = i;
        while (j > 0 && aux < arr[j - 1]) {
            arr[j] = arr[j -  1];
            std::cout << "\n";
            Utils::printArray(arr, size);
            j--;
        }
        std::cout << "\n";
        Utils::printArray(arr, size);
        arr[j] = aux;
    }
}

// Insertion solo con while
void Insertion::insertionSort2(int arr[], int size) {
    int i = 1;
    while (i < size) {
        int aux = arr[i];
        int j = i;
        while(j > 0 && aux < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = aux;
        i++;
    }
}

void Insertion::recursive1(int arr[], int size, int i) {
    if(i > size - 1) return;

    int aux = arr[i];
    int j = i;

    while(j > 0 && aux < arr[j - 1]) {
        arr[j] = arr[j - 1];
        j--;
    }

    arr[j] = aux;
    recursive1(arr, size, i + 1);
}

void Insertion::insertionSort3(int arr[], int size) {
    recursive1(arr, size, 1);
}

// Hibrido recursivo/iterativo
void Insertion::insertionSort4(int arr[], int size) {
    if(size == 1) return;

    insertionSort4(arr, size - 1);

    int aux = arr[size - 1];
    int j = size - 2;

    while ( j >= 0 && arr[j] > aux) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = aux;
}