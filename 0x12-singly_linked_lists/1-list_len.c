#include "lists.h"

/**
 *list_len - returns the number of elements in a linked
 *@h: head
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *list;
	size_t a;

	a = 0;
	list = h;
	while (list != NULL)
	{
		list = list->next;
		a++;
	}
	return (a);
}
