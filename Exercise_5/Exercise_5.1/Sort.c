#include "Sort.h"
#include <stdio.h>
#include <string.h>

typedef struct Dog_t
{
    size_t weight;
    float size;
    char name[30];
    int color;
} Dog;

void SortByName(struct Dog dogs[], size_t dogsLength)
{
    Dog temp;
    char temp[30];

    for (size_t i = 0; i < dogsLength - 1; ++i)
    {
        for (size_t j = i + 1; j < dogsLength; ++j)
        {
            if (strcmp(dogs[i].name, dogs[j].name) > 0)
            {
                temp.name = dogs[i].name;
                dogs[i].name = dogs[j].name;
                dogs[j].name = temp.name;
            }
        }
    }

}

void SortByWeight(struct Dog **dogs, size_t dogsLenght)
{
    Dog temp;
    int temp;

    for (size_t i = 0; i < dogsLength - 1; ++i)
    {
        for (size_t j = i + 1; j < dogsLength; ++j)
        {
            if (dogs[i].weight < dogs[j].weight)
            {
                temp.weight = dogs[i].weight;
                dogs[i].weight = dogs[j].weight;
                dogs[j].weight = temp.weight;
            }
        }
    }
    
}