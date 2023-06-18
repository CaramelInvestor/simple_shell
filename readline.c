#include "shell.h"
/**
 * read_line - Reads user input from input stream
 * Return: The line of user input.
 */

char *read_line()
{
	char *line = NULL;
	size_t buflen = 0;

	getline(&line, &buflen, stdin);
	return (line);
}
