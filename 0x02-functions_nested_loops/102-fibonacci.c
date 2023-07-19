#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by comma, followed by a space.
 *
 * Return: Always 0.
 */

int main(void)

{
	unsigned long term1 = 0;
	unsigned long term2 = 1;
	unsigned long next;
	int i;

	for (i = 1 ; i < 50; i++)
	{
		next = term1 + term2;
		printf("%lu", next);

		term1 = term2;
		term2 = next;

		if (i == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
