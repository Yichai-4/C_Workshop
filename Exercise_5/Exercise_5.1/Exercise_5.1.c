#include <stdio.h>
#include <string.h>
#include "Sort.h"

#define NUM_OF_DOGS

typedef struct Dog_t
{
    char name[30];
    size_t weight; // in Kg
    float size; // in meter
    int color;
} Dog;


int main(void)
{
    Dog labrador = {"Labrador", 30, 1.1, 11 };
    Dog boxer = { "Boxer", 40, 1.2, 12 };
    Dog bulldog = { "Bulldog", 50, 1.3, 13 };
    Dog dobermann = { "Dobermann", 60, 1.5, 15 };
    
    Dog dogs[NUM_OF_DOGS] = { labrador, boxer, bulldog, dobermann };

    size_t dogsLength = sizeof(dogs) / sizeof(dogs[0]);
    //SortByName(&dogs, dogsLength);


    for (size_t i = 0; i < dogsLength; ++i)
    {
        printf("-Dog %d\n", i + 1);
        printf("Name: %s\n", dogs[i].name);
        printf("Weight: %d\n", dogs[i].weight);
        printf("Size: %f\n", dogs[i].size);
        printf("Color: %d\n\n", dogs[i].color);
    }

    return 0;
}
