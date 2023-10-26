#include "main.h"

/**
 * _pow - function name
 * @base: represents the base value
 * @power: represents the exponent to which the base will be raised.
 * Return: The value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the unsigned long integer that convert and print in binary format.
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, b;
	char i;

	i = 0;
	a = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		b = n & a;
		if (b == a)
		{
			i = 1;
			_putchar('1');
		}
		else if (i == 1 || a == 1)
		{
			_putchar('0');
		}
		a >>= 1;
	}
}
