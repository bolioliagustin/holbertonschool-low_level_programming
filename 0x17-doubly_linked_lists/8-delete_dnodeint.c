#include "lists.h"
/**
 * delete_dnodeint_at_index - add node at the end
 * @head: lists
 * @index: int
 * Return: 1 succeeded, -1  failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *r = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
while (r != NULL)
{
if (index == i)
{
if (r->prev != NULL)
r->prev->next = r->next;
if (r->next != NULL)
r->next->prev = r->prev;
if (*head && index == 0)
*head = r->next;
r->prev = NULL;
r->next = NULL;
return (1);
}
r = r->next;
i++;
}
return (-1);
}
