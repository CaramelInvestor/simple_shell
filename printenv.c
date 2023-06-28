#include "shell.h"

/**
 * prints_env - prints the environment variable.
 * Return: void.
 */

void prints_env(void)
{
	char **envs = environ;

	while (*envs != NULL)
	{
		_puts(*envs);
		_puts("\n");
		envs++;
	}
}
