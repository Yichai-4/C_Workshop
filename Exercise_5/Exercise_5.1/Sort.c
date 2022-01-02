#include "Sort.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Dog_t
{
    size_t weight;
    float size;
    char name[30];
    int color;
} Dog;


void SortByName(Dog *dogs, size_t dogsLength)
{
    Dog temp;
    for (size_t i = 0; i < dogsLength - 1; ++i)
    {
        for (size_t j = i + 1; j < dogsLength; ++j)
        {
            if (strcmp(dogs[i].name, dogs[j].name) > 0)
            {
                temp = dogs[i];
                dogs[i] = dogs[j];
                dogs[j] = temp;
            }
        }
    }
}

void SortByWeight(Dog *dogs, size_t dogsLength)
{
    Dog temp;

    for (size_t i = 0; i < dogsLength - 1; ++i)
    {
        for (size_t j = i + 1; j < dogsLength; ++j)
        {
            if (dogs[i].weight < dogs[j].weight)
            {
                temp = dogs[i];
                dogs[i] = dogs[j];
                dogs[j] = temp;
            }
        }
    }
    
}