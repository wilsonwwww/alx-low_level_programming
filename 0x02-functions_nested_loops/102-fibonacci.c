#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers and starts with 1 and 2
 *
 * Return: Nothing!
 */
int main(void)
{
	int i;
	long fib1 = 1, fib2 = 2, next;

	printf("%ld, %ld", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		printf(", %ld", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");
	return (0);
}
