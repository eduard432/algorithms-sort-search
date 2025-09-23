#include <iostream>
#include "Utils.h"
#include "algos/Swap.h"
#include "algos/Selection.h"
#include "algos/Bubble.h"
#include "algos/Insertion.h"
#include "algos/Merge.h"
#include "examples/Fraccion.h"
#include "algos/MergeTemplate.h"
#include "algos/Quick.h"

int main () {
    Fraccion arr[] = {Fraccion(1, 5), Fraccion(1,8), Fraccion(1, 2)};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[] = {23, 7, 81, 0, 9};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    Utils::printArray(arr2, size2);
    Quick::quickSort1(arr2, size2);
    std::cout << "\n";
    Utils::printArray(arr2, size2);

}