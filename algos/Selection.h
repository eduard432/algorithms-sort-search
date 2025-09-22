#ifndef SELECTION_H
#define SELECTION_H

class Selection {
    public:
        static void selectionSort1(int arr[], int size);
        static void selectionSort2(int arr[], int size);
        static void selectionSort3(int arr[], int size);
        static void selectionSort4(int arr[], int size);
        static void selectionSort5(int arr[], int size);

    private:
        static void sortRecursive(int arr[], int size, int i, int j);
};

#endif