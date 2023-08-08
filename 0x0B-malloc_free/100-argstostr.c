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
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	args = malloc(total_len * sizeof(char));
	if (args == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(args + a, av[i]);
		a += strlen(av[i]);
		args[a++] = '\n';
	}
	args[a - 1] = '\0';
	return (args);
}
