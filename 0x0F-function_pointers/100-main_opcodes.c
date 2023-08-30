#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print opcodes of itself
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int numBytes, x;
char *byteArray;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

numBytes = atoi(argv[1]);

if (numBytes < 0)
{
printf("Error\n");
exit(2);
}

byteArray = (char *)main;

for (x = 0; x < numBytes; x++)
{
if (x == numBytes - 1)
{
printf("%02hhx\n", byteArray[x]);

break;
}

printf("%02hhx ", byteArray[x]);
}

return (0);
}
