#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: An unsigned integer
 * @size: size of each element in bytes
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0, j = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
