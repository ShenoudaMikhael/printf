#include "main.h"
#include "stdio.h"
/**
 * print_numbers - function
 * @list: check input
 * @r: check input
 * Return: value
 */
int print_numbers(va_list list, int r)
{
	int n, len, i = 1;
	unsigned int num;

	n = va_arg(list, int);
	len = 0;

	if (r > 0 && n > 0)
	{
		_putchar(' ');
		len++;
	}

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		len++;
	}
	else
		num = n;
	while (num / i > 9)
		i *= 10;
	while (i > 0)
	{
		_putchar((num / i) % 10 + '0');
		len++;
		i /= 10;
	}
	return (len);
}
