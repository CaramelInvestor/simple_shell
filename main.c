#include "shell.h"

/**
 * main - entry point of the shell program
 * Return: 0 on success
 */
int main(void)
{
	size_t bufferSize = 0;
	ssize_t bytesRead;

	char *line = NULL;
	char **tokens;

	while ((bytesRead = getline(&line, &bufferSize, stdin)) != -1)
	{
		/*write(STDIN_FILENO, "#FATE ", 6);*/
		tokens = split_line(line);

		if (tokens[0][0] == '#')
			continue;
		if (tokens[0] != NULL)
		{
			/*Check for the exit built-in command*/
			if (_strcmp(tokens[0], "exit") == 0)
			{
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
		}
	}
	if (line != NULL)
	free(line);

	return (0);
}
