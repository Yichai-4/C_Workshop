#include "esreveR.h"
#include <string.h>

void PrintReverse(char string[])
{
	for (int i = strlen(string) - 1; i >= 0; --i)
	{
		printf("%c", string[i]);
	}
}