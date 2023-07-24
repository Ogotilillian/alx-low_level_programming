#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer pointing to the string
 * Return:0
 */

void rev_string(char *s)
{
	int i, j, k;
	char temp;

	for (i = 0; s[i] != '\0';)
		i++;
	j = 0;
	k = i / 2;
	while (k--)
	{
		temp = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
