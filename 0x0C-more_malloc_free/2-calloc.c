#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calloc - function that allocates memory for an array, using malloc
 * @nmemb: An unsigned integer
 * @size: size of each element in bytes
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	size_t i = nmemb * size;
	ptr = malloc(i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, i);
	return (ptr);

}
