#include <stdio.h>
#include "SearchableEnv.h"

int main(int argc, char *argv[], char *envp[])
{

    PrintEnv(argv[1], **envp);

    return 0;
}