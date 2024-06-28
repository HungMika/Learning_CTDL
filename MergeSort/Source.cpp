#include "Header.h"
int main() {
    int n;
    float Array[MAX_SIZE];
    Input(Array, n);

    mergeSort(Array, n);

    PrintArray(Array, n);

    return 0;
}
