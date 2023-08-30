#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
* is_digit - function that determine if char is a numeric digit or not.
* @s: character that needs to be checked for being a numeric digit.
* Return: 0 if a char is not numeric, 1 if char is numeric
*/

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
* _strlen - function calculates the length of a null-terminated string
* @s: char that needs to be checked for being a numeric digit
* Return: integer that represent string length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* errors - handles errors in main
*/

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
* main - multiplies two numbers that arent negative
* @argc: arguments count
* @argv: arguments vector
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int num1, num2, len, x, i, j, k, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	num1 = _strlen(s1);
	num2 = _strlen(s2);
	len = num1 + num2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (x = 0; x <= num1 + num2; x++)
		result[x] = 0;
	for (num1 = num1 - 1; num1 >= 0; num1--)
	{
		j = s1[num1] - '0';
		i = 0;
		for (num2 = _strlen(s2) - 1; num2 >= 0; num2--)
		{
			k = s2[num2] - '0';
			i += result[num1 + num2 + 1] + (j * k);
			result[num1 + num2 + 1] = i % 10;
			i /= 10;
		}
		if (i > 0)
			result[num1 + num2 + 1] += i;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
