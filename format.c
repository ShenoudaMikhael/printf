#include "main.h"
#include <stddef.h>
int _format(const char *format, va_list args)
{
	the_types fmt[] = {
		{'c', print_char}, {'s', print_str}, {'\0', NULL}};
	int len, q, i;

	len = 0, i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
				i++;
			if (format[i + 1] == '%')
			{
				len += print_mod();
				i += 2;
				continue;
			}
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
			if (fmt[q].t == '\0' && format[i] == '%')
				len += print_mod();
		}
		else
			len += _putchar(format[i]);
		i++;
	}
	return (len);
}