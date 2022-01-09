#include <stdio.h>
#include "Warmup.h"

int main(void)
{
	char userChar;
	int result;
    printf("Please enter a chararacter (press Q or q to quit):\n");

	while (1)
	{
		userChar = getchar();
		// Other way: scanf_s("%c", &userChar, sizeof(char));
		result = ShouldContinue(userChar);
		if (!result)
		{
			break;
		}
		printf("%c", userChar);
	}

	return 0;
}
