#include "shell.h"

/**
 * _atoi - a function that convert strings to number
 *
 * @str: string to be converted to number
 *
 * Return: the number
 */

int _atoi(char *str)
{
        int sign = 1, result = 0, i = 0;

        if (str[i] == '+' || str[i] == '-')
                sign = (str[i++] == '-') ? -1 : 1;
        while (str[i] >= '0' && str[i] <= '9')
                result = (result * 10) + (str[i++] - '0');
        result *= sign;
        return (result);
}
