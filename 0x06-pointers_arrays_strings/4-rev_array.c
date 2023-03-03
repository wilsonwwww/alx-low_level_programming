#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = 0; index < n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = tmp;
	}
}
