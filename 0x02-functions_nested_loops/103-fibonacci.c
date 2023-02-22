#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers and starts with 1 and 2
 *
 * Return: Nothing!
 */
int main(void)
{
	int a = 1, b = 2, tempz;
	int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		tempz = b;
		b += a;
		a = tempz;
	}

	printf("%d\n", sum);
	return (0);
}
