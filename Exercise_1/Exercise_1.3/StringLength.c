#include "StringLength.h"

int MyStrlen(char str[])
{
	int index = 0;
	char currentChar = str[index];
	int length = 0;

	while (currentChar != '\0')
	{
		++length;
		++index;
		currentChar = str[index];
	}

	return length;
}