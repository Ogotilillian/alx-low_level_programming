#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: a pointer to a data structure of type listint_t
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *k = head;

	while (k)
	{
		i += k->n;
		k = k->next;
	}
	return (i);
}
