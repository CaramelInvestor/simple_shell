#include "shell.h"
/**
 * str_len - function to count numbers of string
 *
 * @str: pointer to null terminated string to be counted
 *
 * Return: numbers of characters counted
 */

int str_len(char *str)
{
	if (*str == '\0' || str == NULL)
		return (0);
	return (1 + str_len(++str));
}
