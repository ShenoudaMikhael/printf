#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_str - print int
 * @args: vaglist
 * Return: length
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);

	int strlen = 0;

	if (str == NULL)
		str = "(null)";
	strlen = _strlen(str);

	while (str[0] != '\0')
	{
		_putchar(str[0]);
		str++;
	}

	return (strlen);
}
