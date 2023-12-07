#include "lists.h"

/**
 * insert_dnodeint_at_index - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @h: pointer to a pointer head
 * @idx: is the index of the list where the new node should be added.
 * Index starts at 0
 * @n: value of the new node to the provided integer
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int i;

	a = NULL;
	if (idx == 0)
		a = add_dnodeint(h, n);
	else
	{
		b = *h;
		i = 1;
		if (b != NULL)
			while (b->prev != NULL)
				b = b->prev;
		while (b != NULL)
		{
			if (i == idx)
			{
				if (b->next == NULL)
					a = add_dnodeint_end(h, n);
				else
				{
					a = malloc(sizeof(dlistint_t));
					if (a != NULL)
					{
						a->n = n;
						a->next = b->next;
						a->prev = b;
						b->next->prev = a;
						b->next = a;
					}
				}
				break;
			}
			b = b->next;
			i++;
		}
	}

	return (a);
}
