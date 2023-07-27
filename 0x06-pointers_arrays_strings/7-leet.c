#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to string
 *
 * Return: pointer to s
 */

char *leet(char *s)
{
	int i, j;
	char leetLetters[] = "aAcCoOtTlL";
	char leetNums[] = "4433007711";

	/* scan through string */
	i = 0;
	while (s[i] != '\0')
		/* check whether leetLetters is found */
	{
		j = 0;
		while (j < 10)
		{
			if (leetLetters[j] == s[i])
			{
				s[i] = leetNums[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
