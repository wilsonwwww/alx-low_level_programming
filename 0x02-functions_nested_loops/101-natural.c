#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (Success)
 */
int main(void)
{
	int num, sum = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum = sum + num;
		}

		num++;
	}

	printf("%d\n", sum);
	return (0);
}
