#include "lists.h"
#include <stdlib.h>
/**
* print_listint - prints all elements of a list
* @h: pointer to list
* Return: lu, number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t a = 0;
if (h)
{
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	a++;
	}
}
return (a);
}
