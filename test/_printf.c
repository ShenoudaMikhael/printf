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
	int len;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = 0;
	va_start(args, format);
	len = _format(format, args);
	va_end(args);
	return (len);
}
