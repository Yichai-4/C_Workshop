#include <stdio.h>
#include "Fibonacci_1.h"

int main(void)
{
    printf("Please enter an integer:\n");
    int number;
    scanf_s("%d", &number);

    int fibonacciNumber = GetFibNumber(number);
    printf("Your fibonacci number is: %d", fibonacciNumber);

    return 0;
}
