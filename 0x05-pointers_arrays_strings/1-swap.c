#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @x: pointer 1
 * @y: pointer 2
 * Return; 0
 */

void swap_int(int *x, int *y)
{
	*x += *y;
	*y = *x - *y;
	*x = *x - *y;
}
