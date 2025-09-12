#ifndef MERGE_H
#define MERGE_H

class Merge {
    private:
        static void sortRecursive(int arr[], int start, int end, int *aux);
        
        static void merge(int arr[], int start, int middle, int end, int* aux);
    public:
        static void mergeSort1(int arr[], int size);
    
};

#endif