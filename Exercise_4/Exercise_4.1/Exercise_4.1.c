#include <stdio.h>
#include "esreveR.h"

int main(void)
{
    printf("Hello World!\n");
    char str[] = "Hello";
    char str2[] = "Hello how are you ?";
    PrintReverse(str);
    PrintReverse(str2);

    return 0;
}

