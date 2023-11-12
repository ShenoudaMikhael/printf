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
		{'c', print_char}, {'s', print_str}, {'\0', NULL}};
	int len, q, i;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	len = 0, i = 0;
	va_start(args, format);
	while (format && format[i] != '\0')
	{
		if (format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			len += print_mod();
			i += 1;
		}
		else if (format[i] == '%')
		{
			q = 0;
			while (fmt[q].t != '\0')
			{
				if (fmt[q].t == format[i + 1])
				{
					len += ((fmt[q]).f(args));
					i += 1;
				}
				q++;
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
