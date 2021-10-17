#include "Diamond.h"

void CreateDiamond(int baseLength)
{
	int iterator, k;

    for (k = 1; k <= baseLength; k++)
    {
        for (iterator = 1; iterator <= baseLength - k; iterator++)
            printf(" ");

        for (iterator = 1; iterator <= 2 * k - 1; iterator++)
            printf("*");

        printf("\n");
    }

    for (k = 1; k <= baseLength - 1; k++)
    {
        for (iterator = 1; iterator <= k; iterator++)
            printf(" ");

        for (iterator = 1; iterator <= 2 * (baseLength - k) - 1; iterator++)
            printf("*");

        printf("\n");
    }

}