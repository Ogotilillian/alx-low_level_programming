#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function reads the command-line arguments,
 * converts them to integers using atoi
 * @argc: number of command-line arguments passed to the program when executed
 * @argv: array of char pointers that holds command-line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char operator;
	int result;

	if (argc != 4)
	{
		printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
		return 1;
	}
	operator = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	if (operator == '+')
	{
		result = op_add(num1, num2);
	}
	else if (operator == '-')
	{
		result = op_sub(num1, num2);
	}
	else if (operator == '*')
	{
		result = op_mul(num1, num2);
	}
	else if (operator == '/')
	{
		result = op_div(num1, num2);
	}
	else if (operator == '%')
	{
		result = op_mod(num1, num2);
	}else
	{
		printf("Invalid operator: %c\n", operator);
		return 1;
	}
	printf("%d\n", result);
	return 0;
}
