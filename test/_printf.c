#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string. The format
 * string is composed of zero or more directives
 * Return: number of characters printed
 * (excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	the_types fmt[] = {
		{'d', print_number},
		{'c', print_char},
		{'s', print_str},
		{'%', print_mod},

		{'\0', NULL}};
	int len, q, i;
	va_list args;
	len = 0, i = 0;
	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			q = 0;
			while (fmt[q].t != '\0')
			{
				if (fmt[q].t == format[i + 1])
				{
					len += ((fmt[q]).f(args));
					i++;
				}
				q++;
			}
		}
		else
			_putchar(format[i]);

		i++;
	}
	va_end(args);
	return (i - 1 + len);
}
