#include "shell.h"

/**
 * split_line - Splits a single line of user input into tokens
 * which will be used for execution of commands.
 * @line: a single line of user input from the input stream.
 * Return: Returns tokens which will be used to execute a program
 */

char **split_line(char *line)
{
	int length = 0;
	static char *tokens[6000];  /* Static array with 1024 spaces*/

	char *delimiters = " \"\'\t\r\n";
	char *token = _strtok3(line, delimiters);

	while (token != NULL)
	{
		tokens[length] = token;
		length++;

		token = _strtok3(NULL, delimiters);
	}

	tokens[length] = NULL;
	return (tokens);
}

