#include "lists.h"
#include <stdlib.h>
/**
*listint_len - find a number of elements in listint_t
*@h: head of th linkig list
*Return: return the number of elements
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
return (a);
}
