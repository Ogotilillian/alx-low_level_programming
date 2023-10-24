#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head:  pointer to the first node in the linked list.
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *last = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = next;
	}

	*head = last;
	return (*head);
}
