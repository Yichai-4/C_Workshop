#include <stdio.h>
#include "Warmup.h"

int main()
{
	char userChar;
    printf("Please enter a char (press Q or q to quit):\n");

	while (1)
	{
		scanf_s("%c", &userChar);
		int result = ValidInput(userChar);
		if (!result)
		{
			break;
		}
		printf("%c", userChar);
	}

	getchar();
	return 0;
}
