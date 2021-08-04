#include "lists.h"
#include <stdlib.h>
/**
*free_listint - libera memoria
*@head : puntero del nodo
*/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
