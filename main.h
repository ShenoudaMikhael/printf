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
	int (*f)(va_list);
} the_types;
int _putchar(char c);
int print_number(va_list args);
int print_char(va_list args);
int print_str(va_list args);
void print_mod(void);
int _strlen(char *s);

int _printf(const char *format, ...);

#endif
