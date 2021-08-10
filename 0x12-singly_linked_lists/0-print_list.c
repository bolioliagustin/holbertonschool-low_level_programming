#include "lists.h"
#include <stdio.h>

/**
 *print_list - print all elements of a llist_t
 *@h: head
 *Return: node
 */
size_t print_list(const list_t *h)
{

	const list_t *list;
	size_t  a;

	a = 0;
	list = h;
	while (list != NULL)
	{
		if (list->str)
			printf("[%d] %s\n", list->len, list->str);
		else
			printf("[0] (nil)\n");
		list = list->next;
		a++;
	}
	return (a);
}
