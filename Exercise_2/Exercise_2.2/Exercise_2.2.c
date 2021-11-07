#include <stdio.h>

void ForLoop();
void DoWhileLoop();

int main(void)
{
    printf("This is the result with a for loop:\n");
    ForLoop();
    
    printf("This is the result with a do-while loop:\n");
    DoWhileLoop();
    
    return 0;
}

void ForLoop()
{
    for (size_t i = 1; i < 5; ++i)
    {
        if ((i % 2) == 0)
        {
            printf("%d\n", i);
        }
    }
}

void DoWhileLoop()
{
    int i = 0;

    do
    {
        i++;
        if ((i % 2) == 0)
        {
            printf("%d\n", i);
        }
    } while (i < 5);
}