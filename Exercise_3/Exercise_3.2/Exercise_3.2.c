#include <stdio.h>
#include "Sort.h"

int main(void)
{
    int myArray[] = { 8, 4, 3, 2, 5, 6, 1, 9 };
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    
    SortArray(myArray, arraySize);
    
    for (size_t i = 0; i < arraySize; ++i)
    {
        printf("%d ", myArray[i]);
    }

    return 0;
}

