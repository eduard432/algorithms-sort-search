#ifndef QUICK_H
#define QUICK_H

class Quick {
    private:
        static void sortRecursive(int arr[], int start, int end);
        static int partition (int arr[], int start, int end);
    public:
        static void quickSort1(int arr[], int size);
};

#endif