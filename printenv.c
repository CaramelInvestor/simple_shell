#include "shell.h"

/**
 * prints_env - prints the environment variable..
 */

void prints_env(void)
{
	char **envs = environ;

	while (*envs != NULL)
	{
		_printf("%s\n", *envs);
		envs++;
	}
}
