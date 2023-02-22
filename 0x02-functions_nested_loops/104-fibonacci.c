#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 0, c = 0;
	int i;

	printf("%lu, %lu", a, b);

	for (i = 2; i <= 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}
	c = a + b;
	a = b;
	b = c;
	printf("%lu, ", c);

	printf("%lu\n", c);
	return (0);
}
