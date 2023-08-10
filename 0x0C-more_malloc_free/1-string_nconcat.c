#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: A pointer to the first null-terminated string
 * @s2: A pointer to the second null-terminated string
 * @n: The maximum number of characters from s2 to concatenate.
 * Return: pointer to allocated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;

	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			ptr[j] = s1[j];
		if (j >= i)
		{
			ptr[j] = s2[k];
			k++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
