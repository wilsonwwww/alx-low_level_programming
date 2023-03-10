#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y.
 *
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: If y >= 0 - the value of x raised to the power of y
 *         If y < 0 - -1 to indicate an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
