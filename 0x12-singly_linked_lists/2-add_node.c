#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list
 * @str: string value that will be stored in the newly created node.
 * Return: pointer to the newly created node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *a;

	if (str == NULL)
		return (NULL);
	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	a->str = strdup(str);
	if (a->str == NULL)
	{
		free(a);
		return (NULL);
	}
	a->next = *head;
	*head = a;
	return (a);
}

/**
 * len - length of the string
 * @str: string
 * Return: length of the string
 */

int len(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
