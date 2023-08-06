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
	int cents, a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	/* rest of your code*/
	while (cents > 0)
	{
		a++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", a);
	return (0);
}
