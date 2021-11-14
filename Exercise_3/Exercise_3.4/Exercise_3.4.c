#include <stdio.h>
#include "Fibonacci_2.h"

int main(void)
{
    printf("Please enter an integer smaller than 100:\n");
    int number;
    scanf_s("%d", &number);

    int fibonacciNumber = GetFibLazy(number);
    if (fibonacciNumber < 0)
    {
        printf("Your number greather than 100 !\n");
        return 0;
    }
    printf("Your fibonacci number is: %d", fibonacciNumber);

    return 0;
}

