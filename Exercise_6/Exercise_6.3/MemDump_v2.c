#include "MemDump_v2.h"
#include <stdio.h>
#include<limits.h>

void PrintBin(int *varAddress, int varSize)
{
	unsigned char *b = (unsigned char*)varAddress;
	unsigned char byte;
	int i, j;
	int counter = 0;

	for (i = 0; i < varSize; ++i)
	{
		for (j = 7; j >= 0; j--, ++counter)
		{
			if (counter == 4)
			{
				printf(" ");
				counter = 0;
			}
			byte = (b[i] >> j) & 1;
			printf("%u", byte);
		}
	}
	printf("\n");
}


void PrintBin_v2(int *varAddress, int varSize)
{
	if (varSize == 1)
	{
		printf("%hhx\n", *varAddress);
	}
	if (varSize == 4)
	{
		printf("%x\n", *varAddress);
	}
	if (varSize > 4)
	{
		varSize = varSize / sizeof(int);
		for (int i = 0; i < varSize; ++i)
		{
			printf("%x\n", varAddress[i]);
		}
	}
}


void PrintBin_v3(void* var, size_t sizeOf)
{
	unsigned char* p = (unsigned char*)var;

	for (size_t i = 0; i < sizeOf; ++i)
	{
		for (size_t j = CHAR_BIT; j > 0; --j)
		{
			unsigned char bit = (p[i] >> j - 1) & 1;
			printf("%d", bit);

			if (j == 5)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
