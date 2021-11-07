#include <stdio.h>
#include "Math.h"

// Doxygen

int main()
{
    printf("Hello World!\n");

    int max = Max(10, 20);
    int min = Min(20, 10);
    int size = sizeof(int);
    printf("The size of int is %zu bytes", size);
    getchar();
    return 0;
}

