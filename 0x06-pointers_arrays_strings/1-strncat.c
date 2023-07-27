#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: numder of bytes to be concatenated
 *
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, z;
	/* z is a counterfor n bytes of src to be concatenated */
	/* length_of_string = lengthof destination string */

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
