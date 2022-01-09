#include <stdio.h>
#include "Diamond.h"

int main(void)
{
    size_t baseLength = 5;

    printf("Diamond with a base of %d:\n", baseLength);

    CreateDiamond(baseLength);

    return 0;
}

