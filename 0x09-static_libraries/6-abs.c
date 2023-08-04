#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @c: the number to be computed
 *
 * Return: Absolute value of a number
 */

int _abs(int c)
{
	if (c < 0)
	{

		int abs_val;

		abs_val = -c;
		return (abs_val);
	}
	return (c);
}
