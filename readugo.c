#include "shell.h"
/**
 * read_buff - Reads user input from input stream
 * Return: The line of user input.
 */

char *read_buff(void)
{
char *line = NULL;
size_t buflen = 0;

getline(&line, &buflen, stdin);
return (line);
}
