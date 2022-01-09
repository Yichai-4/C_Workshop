#include <stdio.h>
#include "Fibonacci_2.h"

long long int GetFibLazy(size_t num)
{
	if (num <= 100)
	{
		long long int term1 = 0;
		long long int term2 = 1;
		long long int nextTerm;

		for (int i = 3; i <= num; ++i)
		{
			nextTerm = term1 + term2;
			term1 = term2;
			term2 = nextTerm;
		}

		return nextTerm;
	}

	else
	{
		return -1;
	}
}