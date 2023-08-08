#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string character
 * Return: NULL if str = NULL or if memory allocation fails,
 * otherwise pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *d_str;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Empty loop body; we're just counting characters */
	}
	d_str = malloc((i + 1) * sizeof(char));
	if (d_str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		d_str[j] = str[j];
	}
	return (d_str);
}
