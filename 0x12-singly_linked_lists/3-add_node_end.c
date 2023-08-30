#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: pointer to the head of the linked list.
* @str: pointer to the null-terminated string to be stored in the new node.
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *a;
list_t *b = *head;
unsigned int len = 0;

while (str[len])
len++;
a = malloc(sizeof(list_t));
if (!a)
return (NULL);
a->str = strdup(str);
a->len = len;
a->next = NULL;

if (*head == NULL)
{
*head = a;
return (a);
}
while (b->next)
b = b->next;
b->next = a;
return (a);
}
