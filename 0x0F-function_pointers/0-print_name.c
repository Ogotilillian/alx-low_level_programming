#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: pointer to a character representing a name to be printed
 * @f: function that will be responsible for printing the provided name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
