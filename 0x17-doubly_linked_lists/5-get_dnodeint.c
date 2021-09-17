#include "lists.h"

/**
 * get_dnodeint_at_index -  the  node of a dlistint_t
 * @head: head
 * @index: where index of the node
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *r = head;
unsigned int i = 0;

while (r)
{
if (i == index)
{
return (r);
}
r = r->next;
i++;
}
return (NULL);
}
