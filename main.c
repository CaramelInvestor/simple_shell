#include "shell.h"

/**
 * main - entry point of the shell program
 * Return: 0 on success
 */
int main(void)
{
	while (1)
	{
		char *line;
		char **tokens;

		_puts("($) ");
		line = read_line();

		if (line == NULL)
		{
			_puts("\n");
			break;
		}
		tokens = split_line(line);

		if (tokens[0] != NULL)
		{
			/*Check for the exit built-in command*/
			if (_strcmp(tokens[0], "exit") == 0)
			{
				if (tokens != NULL && tokens[0] != NULL)
				free(tokens);
				if (line)
				free(line);
				break;
			}
			 /*Check for the env built-in command*/
			if (_strcmp(tokens[0], "env") == 0)
			{
				prints_env();
				continue;
			}
			_exec(tokens);
			free(tokens);
			free(line);
		}
	}
	return (0);
}
