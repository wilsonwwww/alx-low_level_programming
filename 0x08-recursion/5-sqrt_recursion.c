#include "main.h"

/**
 * find_sqrt - Finds the natural square root of a number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root, return the square root.
 *         If the number does not have a natural square root, return -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: If n has a natural square root, return the natural square root.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
