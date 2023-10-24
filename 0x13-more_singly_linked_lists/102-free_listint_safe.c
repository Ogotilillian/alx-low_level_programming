#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: It takes a pointer to a pointer to a listint_t object
 * Return:  the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t j = 0;
	int i;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			j++;
		}
		else
		{
			free(*h);
			*h = NULL;
			j++;
			break;
		}
	}
	*h = NULL;
	return (j);
}
