#include "shell.h"

/**
 * print_env - prints the environment variable..
 */

void print_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
