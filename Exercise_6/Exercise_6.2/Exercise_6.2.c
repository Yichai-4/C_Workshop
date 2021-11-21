#include <stdio.h>
#include "MemDump.h"

int main(void)
{
    char c = 'a';
    int i = 1234;
    int myArray[4] = { 111, 231, 341, 451 };
    int i2 = 0x11223344;

    PrintHex(&c, sizeof(c));
    PrintHex(&i, sizeof(i));
    PrintHex(&myArray, sizeof(myArray));
    PrintHex(&i2, sizeof(i2));

    return 0;
}

