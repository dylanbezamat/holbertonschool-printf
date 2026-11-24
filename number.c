#include "main.h"

/**
 * print_number - prints an unsigned integer digit by digit
 * @n: the number to print
 *
 * Return: number of digits printed
 */
int print_number(unsigned int n)
{
	int i, j;
	char tab[10];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	i = 0;
	j = 0;
	while (n != 0)
	{
		tab[i] = n % 10;
		i++;
		n = n / 10;
	}
	while (i > 0)
	{
		i--;
		_putchar(tab[i] + '0');
		j++;
	}
	return (j);
}

/**
 * print_int - prints a signed decimal integer (%d and %i)
 * @args: pointer to the argument list
 *
 * Return: number of characters printed
 */
int print_int(va_list *args)
{
	int n, count;
	unsigned int num;

	n = va_arg(*args, int);
	count = 0;
	if (n < 0)
	{
		count += _putchar('-');
		num = 0u - (unsigned int)n;
	}
	else
		num = (unsigned int)n;
	count += print_number(num);
	return (count);
}