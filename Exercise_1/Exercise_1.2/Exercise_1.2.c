#include <stdio.h>
#include "MoreWarmup.h"
#include <ctype.h> 

int main(void)
{
	char userChar;
	printf("Please enter a chararacter (press Q or q to quit):\n");

	while (1)
	{
		scanf_s("%c", &userChar, sizeof(char));
		int result = ValidInput(userChar);
		if (!result)
		{
			break;
		}
		printf("%c", toupper(userChar));
	}

	getchar();
	return 0;
}

