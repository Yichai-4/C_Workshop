#include <stdio.h>
#include "Sort.h"

int main(void)
{
    //printf("Hello World!\n");
    const int arraySize = 6;
    int my_array[6] = { 1, 4, 5, 7, 2, 3 };
    SortArray(my_array, arraySize);

    for (size_t i = 0; i < 6; i++)
    {
        printf("%d\n", my_array[i]);
    }

    return 0;
}
