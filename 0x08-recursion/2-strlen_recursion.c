#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to be measured.
 *
 * Return: number of bytes in the string pointed to by s.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
