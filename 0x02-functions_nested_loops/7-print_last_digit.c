#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to get the last digit from
 *
 * Return: The last digit of the number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	/* If n is negative, make the last digit positive */
	if (n < 0)
	{
		last_digit *= -1;
	}

	/* Print the last digit using _putchar */
	_putchar(last_digit + '0');

	return (last_digit);
}
