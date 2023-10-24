#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: a pointer to a data structure of type listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
