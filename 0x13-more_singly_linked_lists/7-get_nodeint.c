#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 * a listint_t linked list.
 * @head: a pointer to a data structure of type listint_t
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *a = head;

	while (a && i < index)
	{
		a = a->next;
		i++;
	}
	return (a ? a : NULL);
}
