#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: It's a pointer to a constant list_t structure
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
		while (h)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%u} %s\n", h->len, h->str);
			i++;
			h = h->next;
		}
	return (i);
}