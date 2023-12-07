#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list
 * @head: a pointer to head of the list
 * @index: unsigned integer representing the index of the node to be retrieved
 * Return: null, if the node does not exist
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *a;

	if (head == NULL)
		return (NULL);
	a = head;
	while (a)
	{
	if (index == i)
		return (a);
	i++;
	a = a->next;
	}
	return (NULL);
}
