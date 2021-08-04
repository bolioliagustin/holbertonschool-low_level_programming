#include "lists.h"
#include <stdlib.h>
/**
*pop_listint - deletes the head node of a listint_t linked list
*@head: address
*Return: head nods
*/
int pop_listint(listint_t **head)
{
	int x;
	listint_t *recorrer = NULL;

	if (!head)
	{
		return (0);
	}
	if (head)
	{
		recorrer = *head;
		x = (*head)->n;
		*head = (*head)->next;
		free(recorrer);

	}
return (x);
}
