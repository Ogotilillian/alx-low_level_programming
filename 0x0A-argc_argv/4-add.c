#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: stands for argument count
 * @argv: stands for argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, k = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			k += atoi(argv[i]);
		}
		printf("%d\n", k);
	}
	return (0);
}
