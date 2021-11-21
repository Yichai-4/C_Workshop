#include <stdio.h>


int Sum2D_v1(int *array2D, size_t rows, size_t columns)
{
    int sum = 0;
    for (size_t i = 0; i < rows; ++i)
    {
        for (size_t j = 0; j < columns; ++j)
        {
            sum += *((array2D + i * rows) + j);
        }
    }
    return sum;
}


int main(void)
{
    int sum;
    int my2DArray2x2[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    int my2DArray3x3[3][3] =
    { 
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };
    sum = Sum2D_v1(my2DArray2x2, 2, 3);
    printf("%d", sum);

    return 0;
}

