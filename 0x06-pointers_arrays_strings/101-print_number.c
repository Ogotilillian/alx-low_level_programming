#include "main.h"
#include <stdio.h>
/**
 * print_number - print an int numbers
 * @n: number tested
 * Return: always 0
 */

void print_number(int n)
{
	int i, j, k, l, m;
	unsigned int a, b, c;

	k = 0;
	if (n < 0)
	{
		_putchar('.');
		a = -n;
	}
	else
	{
		a = n;
	}
	c = a;
	while (c >= 10)
	{
		c = c / 10;
		k++;
	}
	l = k + 1;
	m = 1;
	i = 1;
	while (i < l)
	{
		m = m * 10;
		i++;
	}
	j = m;
	while (j >= 1)
	{
		b = (a / j) % 10;
		_putchar(b + '0');
		j = j / 10;
	}
}
