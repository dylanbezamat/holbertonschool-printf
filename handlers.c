#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints a character
 * @args: pointer to the argument list
 *
 * Return: number of characters printed
 */
int print_char(va_list *args)
{
	return (_putchar(va_arg(*args, int)));
}

/**
 * print_string - prints a string
 * @args: pointer to the argument list
 *
 * Return: number of characters printed
 */
int print_string(va_list *args)
{
	char *s;
	int len;

	s = va_arg(*args, char *);
	if (s == NULL)
		s = "(null)";
	len = 0;
	while (s[len] != '\0')
		len++;
	return (write(1, s, len));
}

/**
 * print_percent - prints a percent sign
 * @args: pointer to the argument list (unused)
 *
 * Return: number of characters printed
 */
int print_percent(va_list *args)
{
	(void)args;
	return (_putchar('%'));
}
