#include <stdio.h>
#include "Sum.h"

int main(void)
{
    //printf("Please enter an array of numbers:\n");
    int myArray[] = { 1, 2, 3, 4, 5, 6 };
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int sumOfNumbers = SumOfArray(myArray, arraySize);
    printf("The sum of numbers in the array is %d.", sumOfNumbers);

    return 0;
}
