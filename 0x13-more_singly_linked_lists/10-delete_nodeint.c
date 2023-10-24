#include "lists.h"

/**
 * delete_nodeint_at_index - It deletes the node at index of listint_t list
 * @head: a pointer to a data structure of type listint_t
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a = *head;
	listint_t *b = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}
	while (i < index - 1)
	{
		if (!a || !(a->next))
			return (-1);
		a = a->next;
		i++;
	}
	b = a->next;
	a->next = b->next;
	free(b);
	return (1);
}
