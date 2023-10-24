#include "lists.h"

/**
 * listint_len - it returns the number of elements in a linked listint_t list
 * @h: it is a pointer to listint_t
 * Return: the number of elements to list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
