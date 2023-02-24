#include "main.h"

/**
 * print_numbers - print  0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
