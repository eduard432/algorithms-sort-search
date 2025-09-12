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