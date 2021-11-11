#include <stdio.h>
#include "Sort.h"

int main()
{
    //printf("Hello World!\n");
    int arraySize = 10;
    int my_array[10] = { 8, 4, 3, 2, 5, 6, 1, 9 };
    SortArray(my_array, arraySize);
    
    for (size_t i = 0; i < arraySize; i++)
    {
        printf("%d\n", my_array[i]);
    }

    return 0;
}

