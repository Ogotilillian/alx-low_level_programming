#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of strings in array
 * @av: array of strings to be concatenated
 * Return: pointer to memory allocated string or NULL if it fails to allocate
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;
	a = malloc(sizeof(char) * l + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		if (a[k] == '\0')
		{
			a[k++] = '\n';
		}
	}
	return (a);
}
