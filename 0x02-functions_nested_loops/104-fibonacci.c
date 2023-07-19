#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;
	unsigned long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%lu, %lu", n1, n2);
	for (c = 0; c < 96; c++)
	{
		fn = n1 + n2;
		printf(", %lu", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
