#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct spec - links a conversion specifier to its handler
 * @c: the specifier character
 * @f: function that prints the matching argument
 */
typedef struct spec
{
	char c;
	int (*f)(va_list *args);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list *args);
int print_string(va_list *args);
int print_percent(va_list *args);

#endif
