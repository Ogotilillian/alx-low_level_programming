#include "lists.h"

/**
 * add_nodeint - function that adds new node at the beginning of listint_t list
 * @head: A pointer to a pointer to the head of the linked list
 * @n: integer value that will be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
