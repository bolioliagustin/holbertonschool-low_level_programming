#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at a given position.
 * @h: head
 * @idx: the index of the list
 * @n: value
 * Return: the address node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *r = *h;
unsigned int i = 0;

if (!h)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
while (r)
{
if (idx == 0)
{
free(new);
return (add_dnodeint(h, n));
}
if (idx == i)
{
new->next = r;
new->prev = r->prev;
r->prev = new;
new->prev->next = new;
return (new);
}
i++;
r = r->next;
}
if (idx > i)
return (NULL);
if (idx == i)
{
free(new);
return (add_dnodeint_end(h, n));
}
return (NULL);
}
