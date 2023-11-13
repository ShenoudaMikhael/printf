#include "main.h"
#include <stdarg.h>
/**
 * print_number - print int
 * @args: int to print
 *
 * Return: none.
 */
int print_number(va_list args)
{
	int d, rtl, len;
	int n = va_arg(args, int);

	len = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar(48);
		return (1);
	}
	rtl = 0;
	while (n > 0)
	{
		d = n % 10;
		rtl = rtl * 10 + d;
		n /= 10;
	}
	while (rtl > 0)
	{
		d = rtl % 10;
		_putchar('0' + d);
		len++;
		rtl /= 10;
	}
	return (len);
}
