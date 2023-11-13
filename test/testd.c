#include "main.h"
/**
 * print_number - function
 * @n: check input
*/
int print_dec(va_list list)
{
int n = va_arg(list, int);
int len = 1;
int i = 1;
int num, last, digit;
last = n % 10;
n = n / 10;
num = n;

if (last < 0)
{
_putchar('-');
num = -n;
n = -n;
last = -last;
len++;
}
if (num > 0)
{
	while (num / 10 != 0)
	{
		i *= 10;
		num /= 10;
	}
	num = n;
	while (i > 0)
	{
		digit = num / i;
			_putchar(digit + '0');
			num = num - (digit * i);
			i /= 10;
			len++;
	}
}
_putchar(last + '0');
return (len);
}
