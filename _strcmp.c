#include "shell.h"

/**
 * _strcmp - Compare two strings.
 * @str1: The first string to compare.
 * @str2: The second string to compare.
 *
 * Return: Negative value if str1 is less than str2,
 *         Positive value if str1 is greater than str2,
 *         0 if str1 is equal to str2.
 */

int _strcmp(const char *str1, const char *str2)
{
	while (str1 && (str1 == str2))
	{
		str1++;
		str2++;
	}
	if (*str1 == *str2)
	{
		return (0);
	}
	else if (*str1 < *str2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
