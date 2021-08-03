#include "lists.h"
#include <stdlib.h>
/**
* listint_len - Write the number of elements in a linked
* @h : pointer a list
* Return : Number of elements
*/
size_t listint_len(const listint_t *h)
{
size_t a;
a = 0;
if (h)
{
	while (h)
	{
		a++;
		h = h->next;
	}
}
return (a)
}
