#include "shell.h"

/**
 * main - entry point of the shell program.
 * Return: 0 on success.
 */

int main(void)
{
	while (true)
	{
		printf("#cisfun$ ");
		char *line = read_line();
		char **tokens = split_line(line);

		if (tokens[0] != NULL)
		{
			_exec(tokens);
		}

		free(tokens);
		free(line);
	}
	return (0);
}
