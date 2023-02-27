#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;

	/* Find the length of the string */
	for (length = 0; str[length] != '\0'; length++)
		;

	/* Print the second half of the string */
	for (i = (length + 1) / 2; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
