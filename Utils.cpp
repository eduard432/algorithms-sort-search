#include "Utils.h"
#include <iostream>

void Utils::printArray(int arr[], int size){
    std::cout << "[";

    for (int i = 0; i < size; i++) {
        std::cout << " " << arr[i] << ", ";
    }

    std::cout << " ]";
}