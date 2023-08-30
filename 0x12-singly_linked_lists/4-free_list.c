#include <stdlib.h>
#include "lists.h"

/**
* free_list - function that frees a list_t list.
* @head: pointer typically points to the first node in the list
*/

void free_list(list_t *head)
{
list_t *a;

while (head)
{
a = head->next;
free(head->str);
free(head);
head = a;
}
}
