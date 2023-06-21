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
if (*format == '%') /*note when the program encounters a "%"*/
{
format++; /*Move past '%'*/
if (*format == 'c')
{
/*print a character*/
int c = va_arg(args, int);
_putchar(c);
}
else if (*format == 's')
{
/*print a string*/
char *s = va_arg(args, char *);
while (*s != '\0')
{
_putchar(*s);
s++;
}
}
else if (*format == '%')
{
/*Print '%'*/
_putchar('%');
}
}
else
{
/*Print any other character*/
_putchar(*format);
}
format++;
}

va_end(args);

return (0);
}
