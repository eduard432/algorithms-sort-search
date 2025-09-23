#include "Quick.h"
#include "../Utils.h"
#include <iostream>

void Quick::quickSort1(int arr[], int size) {
    if (size <= 1) return;
    sortRecursive(arr, 0, size - 1);
}

void Quick::sortRecursive(int arr[], int start, int end) {
    if(start < end) {
        int pivot = partition(arr, start, end);
        sortRecursive(arr, start, pivot - 1);
        sortRecursive(arr, pivot + 1, end);
    }
}

int Quick::partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int index = start;
    int aux = 0;
    for (int i = start + 1; i <= end; i++) {
        if(arr[i] <= pivot) {
            index++;
            aux = arr[i];
            arr[i] = arr[index];
            arr[index] = aux;
        }
    }
    aux = arr[index];
    arr[index] = arr[start];
    arr[start] = aux;
    
    return index;
}