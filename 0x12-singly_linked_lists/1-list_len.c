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
	size_t j = 0;

	while (h)
		j++;
	h = h->next;
	return (j);
}
