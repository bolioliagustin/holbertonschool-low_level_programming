#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - libera la lista enlazada
*@head: puntero de la lista
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}

