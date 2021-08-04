#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint - add a new node in the listint_t
*@head: doubled pointer
*@n: new node
*Return: new nod address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node = NULL;
if (head)
{
	add_node = malloc(sizeof(listint_t));
	if (add_node)
	{
		add_node->n = n;
		add_node->next = *head;
		*head = add_node;
	}
}
return(add_node);
}
