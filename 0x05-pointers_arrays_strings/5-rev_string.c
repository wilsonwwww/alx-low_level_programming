#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int half_length;
	char temp;
	int i;

	/* Determine the length of the string */
	while (s[length] != '\0')
		length++;

	half_length = length / 2;

	/* Swap the characters from the beginning and end of the string */
	for (i = 0; i < half_length; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
