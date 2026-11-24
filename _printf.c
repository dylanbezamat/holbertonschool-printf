#include <stddef.h>
#include "main.h"

/**
 * handle_spec - prints the argument matching a specifier
 * @c: the specifier character
 * @args: pointer to the argument list
 *
 * Return: number of characters printed, or -1 if c is not handled
 */
static int handle_spec(char c, va_list *args)
{
	spec_t specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	int i;

	for (i = 0; specs[i].f != NULL; i++)
	{
		if (specs[i].c == c)
			return (specs[i].f(args));
	}
	return (-1);
}

/**
 * _printf - produces output according to a format
 * @format: character string with zero or more directives
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count, ret;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			continue;
		}
		i++;
		if (format[i] == '\0')
		{
			va_end(args);
			return (-1);
		}
		ret = handle_spec(format[i], &args);
		if (ret == -1)
		{
			_putchar('%');
			_putchar(format[i]);
			ret = 2;
		}
		count += ret;
	}
	va_end(args);
	return (count);
}
