#include "Diamond.h"

void CreateDiamond(int baseLength)
{
	int iterator = baseLength;
    int c, k;
    for (k = 1; k <= baseLength; k++)
    {
        for (c = 1; c <= baseLength - k; c++)
            printf(" ");

        for (c = 1; c <= 2 * k - 1; c++)
            printf("*");

        printf("\n");
    }

    for (k = 1; k <= baseLength - 1; k++)
    {
        for (c = 1; c <= k; c++)
            printf(" ");

        for (c = 1; c <= 2 * (baseLength - k) - 1; c++)
            printf("*");

        printf("\n");
    }

}