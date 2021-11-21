#include "MemDump_v2.h"
#include <stdio.h>

void PrintBin(int* varAddress, int varSize)
{
	//if (varSize == 1)
	//{
	//	printf("%hhx\n", *varAddress);
	//}
	//if (varSize == 4)
	//{
	//	printf("%x\n", *varAddress);
	//}
	//if (varSize > 4)
	//{
	//	varSize = varSize / sizeof(int);
	//	for (int i = 0; i < varSize; ++i)
	//	{
	//		printf("%x\n", varAddress[i]);
	//	}
	//}
	unsigned char* b = (unsigned char*)varAddress;
	unsigned char byte;
	int i, j;

	for (i = varSize - 1; i >= 0; i--) {
		for (j = 7; j >= 0; j--) {
			byte = (b[i] >> j) & 1;
			printf("%u", byte);
		}
	}
	puts("");
}