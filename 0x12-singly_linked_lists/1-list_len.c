#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list_t list
 * @h: points to the header
 * Return: number of elements of a list
 */

size_t list_len(const list_t *h)
{
	int j;

	if (h == NULL)
		return (0);
	for (j = 1; h->next != NULL; j++)
		h = h->next;
	return (j);
}
