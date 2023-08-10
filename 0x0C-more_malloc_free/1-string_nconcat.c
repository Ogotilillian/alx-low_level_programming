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

	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;
	if (n < l)
		ptr = malloc(sizeof(char) * (k + n + 1));
	else
		ptr = malloc(sizeof(char) * (k + l + 1));
	if (!ptr)
		return (NULL);
	while (i < k)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < l && i < (k + n))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
