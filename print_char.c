#include "main.h"
#include <stdarg.h>

/**
 * print_char - Entry point
 * @args: va_list
 * @r: check input
 * Return: Always 1
 */
int print_char(va_list args, int r)
{
	char a = va_arg(args, int);

	if (r > 0)
		r = 0;
	_putchar(a);
	return (1);
}
