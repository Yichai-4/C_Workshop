#include "Sort.h"

void SortArray(int array[], int arraySize)
{
    int i, j, a;

    for (i = 0; i < arraySize; ++i) {
        for (j = i + 1; j < arraySize; ++j) {
            if (array[i] > array[j]) {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
}