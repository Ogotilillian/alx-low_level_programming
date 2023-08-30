#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: it specifies the number of integer arguments that will be passed.
 * @...: variable number of parameters to calculate the sum of
 * Return: n == 0 - 0, otherwise return the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
