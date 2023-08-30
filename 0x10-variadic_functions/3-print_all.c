#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: pointer to a null-terminated format string that specifies how
 * the subsequent arguments should be formatted and printed.
 * @...: Variable number of arguments to be printed based on the format string
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *a, *b = "";
	va_list j;

	va_start(j, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", b, va_arg(j, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(j, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(j, double));
					break;
				case 's':
					a = va_arg(j, char *);
					if (!a)
						a = "(nil)";
					printf("%s%s", b, a);
					break;
				default:
					i++;
					continue;
			}
			b = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(j);
}
