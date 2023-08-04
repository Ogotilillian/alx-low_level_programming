#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: stands for argument count
 * @argv: stands for argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	i = n1 * n2;

	printf("%d\n", i);
	return (0);
}
