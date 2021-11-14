#include <stdio.h>
#include "Fibonacci_2.h"

int main(void)
{
    printf("Please enter an integer:\n");
    int number;
    scanf_s("%d", &number);

    int fibonacciNumber = GetFibLazy(number);
    printf("Your fibonacci number is: %d", fibonacciNumber);

    return 0;
}

