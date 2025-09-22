#ifndef UTILS_H
#define UTILS_H

#include <iostream>

class Utils {
public:
    template <typename T>
    static void printArray(T arr[], int size) {
        std::cout << "[";
        for (int i = 0; i < size; i++) {
            std::cout << " " << arr[i] << ", ";
        }
        std::cout << " ]";
    }
};

#endif