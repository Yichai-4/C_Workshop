#include <stdio.h>
#include "MoreWarmup.h"
#include <ctype.h> 

int main(void)
{
	char userChar;
	int checkResult;
	printf("Please enter a chararacter (press Q or q to quit):\n");

	while (1)
	{
		userChar = getchar();
		// Other way: scanf_s("%c", &userChar, sizeof(char));
		checkResult = ShouldContinue(userChar);
		if (!checkResult)
		{
			break;
		}
		printf("%c", toupper(userChar));
	}

	return 0;
}

