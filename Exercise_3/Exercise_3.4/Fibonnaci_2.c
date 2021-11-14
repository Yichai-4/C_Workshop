#include "Fibonacci_2.h"

typedef struct Next_t {
	int term1;
	int term2;
	int nextTerm;
} Next;

int GetFibLazy(int num)
{
	if (num <= 100)
	{
		int term1 = 0;
		int term2 = 1;
		int nextTerm;

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