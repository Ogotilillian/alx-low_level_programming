#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator:  the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * @...: allows a function to accept a variable number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int j;

	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(i, int));
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(i);
}
