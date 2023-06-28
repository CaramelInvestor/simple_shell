#include "shell.h"

/**
 * main - entry point of the shell program
 * Return: 0 on success
 */
int main(void)
{
	size_t bufferSize = 0;
	ssize_t bytesRead;

	char *line;
	char **tokens;

	while (_puts("($) ") &&
	(bytesRead = getline(&line, &bufferSize, stdin)) != -1)
	{
		tokens = split_line(line);

		if (tokens[0] != NULL)
		{
			/*Check for the exit built-in command*/
			if (_strcmp(tokens[0], "exit") == 0)
			{
				if (tokens != NULL && line != NULL)
				{
					free(tokens);
				}
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
		}
	}
	return (0);
}
