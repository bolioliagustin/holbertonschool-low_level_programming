#include <string.h>
#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t
 *@head: head
 *@str: str
 *Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *x;
	int a;
	list_t *list, *last;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	x = strdup(str);
	if (x == NULL)
	{
		free(list);
		return (NULL);
	}

	for (a = 0; str[a];)
		a++;

	list->str = x;
	list->len = a;
	list->next = NULL;

	if (*head == NULL)
		*head = list;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = list;
	}
	return (*head);
}
