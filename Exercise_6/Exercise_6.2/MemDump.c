#include "MemDump.h"
#include <stdio.h>

void PrintHex(int* varAddress, int varSize)
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