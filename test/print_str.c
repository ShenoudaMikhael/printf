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
	char *str;
	int strlen = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[strlen])
	{
		_putchar(str[strlen]);
		strlen++;
	}

	return (strlen);
}
