#include <stdio.h>

/**
 * main -prints all possible combination of single digit numbers.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i = '0';
while (i <= '9')
	{
	putchar(i != '9');
	{
		putchar(',');
		putchar(' ');
	}
	++i;
	}
	putchar('\n');
	return (0);
}
