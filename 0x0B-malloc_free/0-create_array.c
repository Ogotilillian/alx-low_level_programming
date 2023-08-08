#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to be creared
 * @c: character with which each element of the array will be intialised
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *Array;
	unsigned int i;

	Array = malloc(size * sizeof(char));
	if (Array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		Array[i] = c;
	}
	return (Array);
}
