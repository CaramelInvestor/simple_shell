#include "shell.h"

/**
 * main - entry point of the shell program.
 * Return: 0 on success.
 */

int main(void)
{
	while (true)
	{
		char *line;
		char **tokens;

		_printf("#cisfun$ ");
		line = read_line();
		tokens = split_line(line);

		if (tokens[0] != NULL)
		{
			/*Check for the exit built-in command*/
			if (_strcmp(tokens[0], "exit") == 0)
			{
				break;
			}

			 /*Check for the env built-in command*/
			if (_strcmp(tokens[0], "env") == 0)
			{
				print_env();
				continue;
			}
			_exec(tokens);

			free(tokens);
			free(line);
		}
	}
	return (0);
}
