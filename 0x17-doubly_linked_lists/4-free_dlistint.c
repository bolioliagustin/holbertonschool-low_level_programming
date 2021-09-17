#include "lists.h"
/**
 * free_dlistint - free list
 * @head: lista
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *i;

while (head)
{
i = head->next;
free(head);
head = i;
}
}
