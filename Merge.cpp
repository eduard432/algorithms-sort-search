#include "Merge.h"

void Merge::mergeSort1(int arr[], int size) {
    int* aux = new int[size];
    sortRecursive(arr, 0, size - 1, aux);
    delete[] aux;
}

void Merge::sortRecursive(int arr[], int start, int end,  int *aux) {
    if(start < end) {
        int middle = (start + end) / 2;
        sortRecursive(arr, start, middle, aux);
        sortRecursive(arr, middle + 1, end, aux);
        merge(arr, start, middle, end, aux);
    }
}

void Merge::merge(int arr[], int start, int middle, int end, int* aux) {
    int i = start;
    int j = middle + 1;
    int k = start;

    while(i <= middle && j <= end) {
        if (arr[i] < arr[j]) {
            aux[k] = arr[i];
            i++;
        } else {
            aux[k] = arr[j];
            j++;
        }
        k++;

    }

    if(i > middle) {
        for(; j <= end; j++) {
            aux[k] = arr[j];
            k++;
        }
    } else {
        for(; i <= middle; i++) {
            aux[k] = arr[i];
            k++;
        }
    }

    for(int m = start; m <= (end); m++) {
        arr[m] = aux[m];
    }
}