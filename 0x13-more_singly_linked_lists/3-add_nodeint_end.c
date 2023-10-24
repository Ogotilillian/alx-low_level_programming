#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of listint_t list
 * @head: pointer to a pointer to the head of the linked list
 * @n: integer value that will be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *k = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (k->next)
		k = k->next;
	k->next = ptr;
	return (ptr);
}
