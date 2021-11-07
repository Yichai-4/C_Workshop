#include "Sum.h"

int SumOfArray(int array[], int arraySize)
{
	
	int sumOfNumbers = 0;

	for (int i = 0; i < arraySize; ++i)
	{
		sumOfNumbers += array[i];
	}
	return sumOfNumbers;
}