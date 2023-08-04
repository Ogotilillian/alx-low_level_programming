#include <stdio.h>

/**
 * main - entry point
 * @argc: stands for argument count
 * @argv: stands for argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
