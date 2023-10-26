#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first parameter
 * @m: second parameter
 * Return: the count of differing bits, which represents the number of bits
 * need to be flipped in n to make it match m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int cur;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = excl >> i;
		if (cur & 1)
			j++;
	}
	return (j);
}
