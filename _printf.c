#include "shell.h"
/**
 * _printf - Entry point
 * @format: A string containing all the desired characters
 * Description: Receives the main string and all the necessary parameters to
 * print a formated string
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0') /*as long as the characters are not null byte*/
	{
		/*Print any other character*/
		_putchar(*format);
		format++;
	}

	va_end(args);

	return (0);
}
