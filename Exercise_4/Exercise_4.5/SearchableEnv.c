#include "SearchableEnv.h"
#include <stdio.h>
#include <string.h>

void PrintEnv(char argv[], char *envp[])
{
	char *checker = NULL;
	for (char **env = envp; *env != 0; ++env)
	{
		char *thisEnv = *env;
		checker = strstr(thisEnv, argv);
		if (checker == thisEnv)
		{
			printf("%s\n", thisEnv);
		}
	}
}