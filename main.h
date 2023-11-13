#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct types - struct
 * @t: type
 * @f: function to call
 */
typedef struct types
{
	char t;
	int (*f)(va_list, int);
} the_types;
int _putchar(char c);
int print_numbers(va_list args, int r);
int print_dec(va_list args, int r);
int print_char(va_list args, int r);
int print_str(va_list args, int r);
int print_mod(void);
int _strlen(char *s);
int _format(const char *format, va_list args);
int _printf(const char *format, ...);

#endif
