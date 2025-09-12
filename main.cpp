#include <iostream>
#include "Utils.h"
#include "Swap.h"
#include "Selection.h"
#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"

int main () {
    int arr[] = {6, 9, 4, 3, 1, 7, 2, 8, 5, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {23, 7, 81, 0, 9};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    // Utils::printArray(arr, size);
    Utils::printArray(arr, size);
    Merge::mergeSort1(arr, size);
    std::cout << "\n";
    Utils::printArray(arr, size);

}