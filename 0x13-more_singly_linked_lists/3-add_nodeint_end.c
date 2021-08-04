#include "lists.h"

/**
 *add_nodeint_end - add a new node in the end
 *@head: double pointer
 *@n: value of the new nod
 *Return: addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *n;

	current = *head;
	while (x->next != NULL)
		x = x->next;

	n = malloc(sizeof(listint_t));
	if (n == NULL)
		return (NULL);
	n->n = n;
	n->next = NULL;

	if (x)
		x->next = n;
	else
		*head = n;
	return (n);
}
