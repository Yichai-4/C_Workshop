#include "Warmup.h"

int ValidInput(char userInput)
{
	if (userInput == 'Q' || userInput == 'q')
	{
		return 0;
	}
	return 1;
}