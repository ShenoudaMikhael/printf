#include "main.h"
/**
 * print_number - function
 * @n: check input
*/
int print_dec(va_list list)
{
int n, len, i = 1;
unsigned int num;
n = va_arg(list, int);
len = 0;

if (n < 0)
{
_putchar('-');
num = -n;
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
