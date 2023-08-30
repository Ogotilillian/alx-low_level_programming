#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: allows the function to accept a variable number of arguments
 * description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i;
	char *a;
	unsigned int j;

	va_start(i, n);
	for (j = 0; j < n; j++)
	{
		a = va_arg(i, char *);
			if (a == NULL)
				printf("(nil)");
			else
				printf("%s", a);
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(i);

}
