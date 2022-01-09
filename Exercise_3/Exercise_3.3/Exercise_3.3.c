#include <stdio.h>
#include "Fibonacci_1.h"

int main(void)
{
    size_t number;

    printf("Please enter an integer:\n");
    scanf_s("%d", &number);

    long long int fibonacciNumber = GetFibNumber(number);
    printf("Your fibonacci number is: %lld", fibonacciNumber);

    return 0;
}
