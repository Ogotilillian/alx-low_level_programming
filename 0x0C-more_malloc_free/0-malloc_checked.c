#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *checked;

	checked = malloc(b);
	if (checked == NULL)
		exit(98);
	else
		return (checked);
}
