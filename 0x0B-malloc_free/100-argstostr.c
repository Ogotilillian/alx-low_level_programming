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
	char *args;
	int total_len = 0;
	int a = 0;
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_len++;
		}
		total_len++;
	}
	args = malloc(sizeof(char) * (total_len + 1));
	if (args == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[a] = av[i][j];
			a++;
		}
		args[a] = '\n';
	}
	args[a] = '\0';
	return (args);
}
