#include "lists.h"
/**
 * dlistint_len - return num 
 * @h: lista
 * Return: the of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *i;
int nodes = 0;

i = h;
while (i)
{
i = i->next;
nodes++;
}
return (nodes);
}
