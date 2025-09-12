#include <iostream>

void iterativo1 (int maxValue) {
    for (int i = 0; i < maxValue; i++) {
        std::cout << i << "-";
    }
}

void recursivo1 (int maxValue, int prevValue) {
    if (prevValue >= maxValue) {
        return;
    }
    std::cout << prevValue << "-";

    recursivo1(maxValue, prevValue + 1);
}

void iterativo2 (int maxValue) {
    // Bloque de código 0
    for (int i = 0; i < maxValue; i++) {
        std::cout << i << std::endl;
        // Bloque de código 1
        for (int j = 0; j < maxValue; j++) {
            // Bloque de código 2
            std::cout << j << std::endl;
        }        
    }
    // Bloque de código 3
}

void recursivo2 (int maxValue, int i, int j) {
    // Bloque de código 0
    if (i >= maxValue) {
        return; // Bloque de código 3 (cuando termina todo)
    }

    std::cout << i << std::endl; // corresponde a imprimir i del for externo
    // Bloque de código 1

    if (j >= maxValue) {
        recursivo2(maxValue, i + 1, 0); // avanzar "for externo"
        return;
    }

    // Bloque de código 2
    std::cout << j << std::endl; // corresponde a imprimir j del for interno
    recursivo2(maxValue, i, j + 1); // avanzar "for interno"
}
