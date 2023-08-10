#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - ...
 * @ptr:  pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: ...
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		a[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (a);
}
