#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 5)
    {
        ++i;
        if ((i % 2) == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
