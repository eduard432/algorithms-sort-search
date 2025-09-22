#ifndef BUBBLE_H
#define BUBBLE_H

class Bubble {
    private:
        static void recursivo1(int arr[], int size, int i, int j);
        static void recursivo2(int arr[], int size, int i1, int j, bool hasMadeSwap);

    public:
        static void bubbleSort1(int arr[], int size);
        static void bubbleSort2(int arr[], int size);
        static void bubbleSort3(int arr[], int size);
        static void bubbleSort4(int arr[], int size);
        static void bubbleSort5(int arr[], int size);
        static void bubbleSort6(int arr[], int size);
};

#endif