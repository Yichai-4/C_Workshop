#include "MoreWarmup.h"

int ShouldContinue(char userInput)
{
	if (userInput == 'Q' || userInput == 'q')
	{
		return 0;
	}

	return 1;
}