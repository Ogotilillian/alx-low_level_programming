#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: pointer to a pointer head
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *a;
	unsigned int i;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	i = 0;

	while (h != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				a->next = h->next;

				if (h->next != NULL)
					h->next->prev = a;
			}

			free(h);
			return (1);
		}
		a = h;
		h = h->next;
		i++;
	}

	return (-1);
}
