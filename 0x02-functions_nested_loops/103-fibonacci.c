#include <stdio.h>

/**
 * main - main block
 * Description - computes and prints even numbers less than 4,000,000
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int a = 0, b = 1, c = 0;
	int sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%i\n", sum);
	return (0);
}
