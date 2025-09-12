#include "Selection.h"

/*
  Variaciones en el FOR e IF de Selection Sort:

  - La idea básica es recorrer el arreglo con un índice (externo)
    y buscar el mínimo o el máximo en la parte no ordenada (interno),
    para colocarlo en su posición correcta.

  Existen 6 combinaciones principales:
  
  1) Externo: izq→der, Interno: izq→der, busca MÍNIMO → Ascendente
  2) Externo: der→izq, Interno: der→izq, busca MÁXIMO → Ascendente
  3) Externo: izq→der, Interno: izq→der, busca MÁXIMO → Descendente
  4) Externo: der→izq, Interno: der→izq, busca MÍNIMO → Descendente
  5) Externo: izq→der, Interno: der→izq, busca MÍNIMO → Ascendente (igual a #1)
  6) Externo: der→izq, Interno: izq→der, busca MÁXIMO → Ascendente (igual a #2)

  -> Conclusión:
     Usando el MÍNIMO siempre puedes construir orden ascendente
     colocando el mínimo en la izquierda.
     Usando el MÁXIMO siempre puedes construir orden ascendente
     colocándolo en la derecha.
     Las otras variaciones generan orden descendente.
*/

void Selection::selectionSort1(int arr[], int size) {
    int aux;
    int lowestI;
    
    for (int i = 0; i < size - 1; i++) {
        lowestI = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[lowestI]) {
                lowestI = j;
            }
        }

        // Verificamos si encontramos un elemento más pequeño:
        if(lowestI != i) {
            // Cambiamos <->
            aux = arr[i];
            arr[i] = arr[lowestI];
            arr[lowestI] = aux;
        }
    }
}

void Selection::selectionSort2(int arr[], int size) {
    int aux;
    int lowestI;
    
    for (int i = size - 1; i > 0; i--) {
        lowestI = i;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[lowestI]) {
                lowestI = j;
            }
        }

        // Verificamos si encontramos un elemento más pequeño:
        if(lowestI != i) {
            // Cambiamos <->
            aux = arr[i];
            arr[i] = arr[lowestI];
            arr[lowestI] = aux;
        }
    }
}

void Selection::selectionSort3(int arr[], int size) {
    int aux;
    int biggestI;
    
    for (int i = size - 1; i > 0; i--) {
        biggestI = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[biggestI]) {
                biggestI = j;
            }
        }

        // Verificamos si encontramos un elemento más grande:
        if(biggestI != i) {
            // Cambiamos <->
            aux = arr[i];
            arr[i] = arr[biggestI];
            arr[biggestI] = aux;
        }
    }
}

void Selection::selectionSort4(int arr[], int size) {
    int aux;
    int lowestI;
    
    for (int i = 0; i < size - 1; i++) {
        lowestI = i;
        for (int j = size - 1; j > i - 1; j--) {
            if (arr[j] < arr[lowestI]) {
                lowestI = j;
            }
        }

        // Verificamos si encontramos un elemento más grande:
        if(lowestI != i) {
            // Cambiamos <->
            aux = arr[i];
            arr[i] = arr[lowestI];
            arr[lowestI] = aux;
        }
    }
}

void Selection::sortRecursive(int arr[], int size, int i, int j) {
    int aux;
    int lowestI = i;

    if(i > size - 1) return;

    if (j < size) {
        if (arr[j] < arr[lowestI]) {
            lowestI = j;
        }
        sortRecursive(arr, size, i + 1, i + 1);
    } else {
        if(lowestI != i) {
            // Cambiamos <->
            aux = arr[i];
            arr[i] = arr[lowestI];
            arr[lowestI] = aux;
        }

        sortRecursive(arr, size, i, j + 1);
    }
}

void Selection::selectionSort5(int arr[], int size) {
    sortRecursive(arr, size, 0, size - 1);
}