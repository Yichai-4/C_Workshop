#include "MemDump.h"
#include <stdio.h>

void PrintHex(int *varAddress, int varSize)
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


void PrintHex_v2(void *var, size_t sizeOf)
{
	unsigned char *p = (unsigned char*)var;

	for (size_t i = 0; i < sizeOf; ++i)
	{
		printf("%02x", p[i]);
	}
	printf("\n");
}
