#include <stdio.h>
#include "StringLength.h"

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "W";
	
	if (MyStrlen(str1) != 5)
	{
		printf("There is an error in the function MyStrlen\n");
	}
	else
	{
		printf("Success !\n");
	}

	printf("%d", MyStrlen(str2));

	return 0;
}
