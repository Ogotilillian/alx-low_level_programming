#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for the letter. 0 for the rest
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
