#include "Fibonacci_1.h"

int GetFibNumber(int num)
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