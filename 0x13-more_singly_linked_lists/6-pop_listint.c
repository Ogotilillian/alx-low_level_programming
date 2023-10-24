#include "lists.h"

/**
 * pop_listint -function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: a pointer to a data structure of type listint_t
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int i;

	if (!head || !*head)
		return (0);
	i = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;
	return (i);
}
