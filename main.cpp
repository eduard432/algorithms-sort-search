#include <iostream>
#include "Utils.h"
#include "Swap.h"
#include "Selection.h"
#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
#include "Fraccion.h"
#include "algos/MergeTemplate.h"

int main () {
    Fraccion arr[] = {Fraccion(1, 5), Fraccion(1,8), Fraccion(1, 2)};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {23, 7, 81, 0, 9};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    Utils::printArray(arr, size);
    MergeTemplate<Fraccion>::mergeSort1(arr, size);
    std::cout << "\n";
    Utils::printArray(arr, size);

}