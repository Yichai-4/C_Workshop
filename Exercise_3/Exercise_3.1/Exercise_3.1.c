#include <stdio.h>
#include "Sum.h"

int main(void)
{
    const int arraySize = 5;
    //int arraySize = sizeof(array) / sizeof(array[0]);
    //printf("Hello World!\n");
    //printf("Please enter an array of numbers:\n");
    int myArray[5] = { 1, 2, 3, 4, 5 };

    int sumOfNumbers = SumOfArray(myArray, arraySize);
    printf("The sum of numbers in the array is %d", sumOfNumbers);

    return 0;
}
