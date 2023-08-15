#include <stdio.h>

/**
 * main - function to prints the name of the file it was compiled from.
 * Return: 0
 */
int main(void)
{
	printf("Compiled from file: %s\n", __FILE__);
	return 0;
}
