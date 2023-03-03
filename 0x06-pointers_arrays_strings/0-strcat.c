#include "main.h"

/**
 * _strcat - concatenates @src to @dest
 * @dest: the destination string to be concatenated upon
 * @src: the source string to append to @dest
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest,  char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index] != '\0')
	{
		dest_len++;
		index++;
	}

	index = 0;
	while (src[index] != '\0')
	{
		dest[dest_len] = src[index];
		dest_len++;
		index++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
