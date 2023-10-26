#include"main.h"

/**
 * get_bit -function that returns the value of a bit at a given index
 * @n: represent number of checked bits
 * @index:  is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	b = n & a;
	if (b == a)
		return (1);
	return (0);
}
