#include <stdio.h>
#include "Fibonacci_2.h"

int main(void)
{
    size_t number;

    printf("Please enter an integer smaller than 100:\n");
    scanf_s("%d", &number);

    long long int fibonacciNumber = GetFibLazy(number);
    if (fibonacciNumber < 0)
    {
        printf("Your number greather than 100 !\n");
        return 0;
    }
    printf("Your fibonacci number is: %lld", fibonacciNumber);

    return 0;
}

