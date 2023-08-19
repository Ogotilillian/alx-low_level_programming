#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function returns a pointer to the function that
 * corresponds to the operator given as a parameter
 * @s: the operator passed as argument to the program
 * Return: pointer to the function that
 * corresponds to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t j[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (j[i].op != NULL && *(j[i].op) != *s)
		i++;
	return (j[i].f);
}
