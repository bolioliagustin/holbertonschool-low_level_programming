#include "lists.h"
/**
 * print_dlistint - print list
 * @h: lista
 * Return:number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *i;
int nodes = 0;

i = h;
while (i)
{
printf("%d\n", i->n);
i = i->next;
nodes++;
}
return (nodes);
}
