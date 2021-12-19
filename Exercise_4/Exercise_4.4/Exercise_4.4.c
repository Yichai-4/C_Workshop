#include <stdio.h>
#include "Environment.h"


int main(int argc, char** argv, char** envp)
{
    char* token;
    for (char** env = envp; *env != 0; env++)
    {
        char* thisEnv = *env;
        token = strtok(thisEnv, "=");
        printf("Environment variable \"%s\"", token);
        token = strtok(NULL, "=");
        printf(" has the value \"%s\"\n", token);
    }

    return 0;
}
