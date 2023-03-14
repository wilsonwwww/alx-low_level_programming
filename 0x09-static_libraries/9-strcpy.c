#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Description: Copies the string pointed to by pointer `src` to the buffer
 *              pointed to by `dest`, including the terminating null byte.
 *
 * Return: Pointer to `dest`.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
