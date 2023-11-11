#include "main.h"
#include <stdarg.h>

/**
 * print_char - Entry point
 * @args: va_list
 * Return: Always 1
 */
int print_char(va_list args)
{
	char a = va_arg(args, int);

	_putchar(a);
	return (sizeof(a));
}
