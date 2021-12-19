#include "Parameters.h"
#include <stdio.h>


void PrintParametersStatistics(size_t argc, char* argv[])
{
    printf("List of the parameters:\n");
    for (size_t i = 0; i < strlen(argv); ++i)
    {
        printf("%s ", argv[i]);
    }
    printf("\n");

    printf("Number of parameters: %d\n", argc);

    int switcheCount = 0;
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int noUpperNoLowerCount = 0;
    for (size_t i = 0; i < strlen(argv); ++i)
    {
        char* arg = argv[i];
        int j = 0;
        while (arg[j] != '\0')
        {
            if (arg[i] == '-' || arg[i] == '/')
            {
                ++switcheCount;
            }
            ++j;
        }
    }

    printf("Number of switches: %d\n", switcheCount);




}