#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of
 * a dlistint_t linked list
 * @head: a pointer to the head
 * Return: 0, if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			i += head->n;
			head = head->next;
		}
	}

	return (i);
}
