#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by comma, followed by a space.
 *
 * Return: Always 0.
 */

int main(void)

{
	int term1 = 1;
	int term2 = 2;
	int next;
	int i;

	printf("%d, ", term1);

	for (i = 1 ; i < 50; i++)
	{
		printf("%d, ", term2);
		next = term1 + term2;
		term1 = term2;
		term2 = next;
	}
	printf("\n");
	return (0);
}
