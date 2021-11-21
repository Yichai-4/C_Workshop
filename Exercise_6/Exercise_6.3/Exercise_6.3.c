#include <stdio.h>
#include "MemDump_v2.h"

int main(void)
{
    char c = 'a';
    int i = 1234;
    int myArray[4] = { 111, 231, 341, 451 };
    int i2 = 0x11223344;

    PrintBin(&c, sizeof(c));
    PrintBin(&i, sizeof(i));
    PrintBin(&myArray, sizeof(myArray));
    PrintBin(&i2, sizeof(i2));

    return 0;
}

