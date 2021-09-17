#include "lists.h"

/**
 * sum_dlistint - returns the sum  of a list.
 * @head: head
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *r = head;
int i = 0;

while (r)
{
i += r->n;
r = r->next;
}
return (i);
}
