#include "main.h"

/**
 * factorial - Computes the factorial of a given number.
 *
 * @n: The number to compute the factorial of.
 *
 * Return: If n > 0 - the factorial of n
 *         If n == 0 or n == 1 - 1
 *         If n < 0 - -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
