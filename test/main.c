#include <stdio.h>
#include "../main.h"

/**
 * main - compares _printf with printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len, len2);
	len = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Len: %d / %d\n", len, len2);
	len = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Len: %d / %d\n", len, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len: %d / %d\n", len, len2);
	len = _printf("Null:[%s]\n", NULL);
	len2 = printf("Null:[%s]\n", (char *)NULL);
	printf("Len: %d / %d\n", len, len2);
	return (0);
}
