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
	listint_t *l;

	x = *head;
	while (x && x->next != NULL)
		x = x->next;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = NULL;

	if (x)
		x->next = l;
	else
		*head = l;
	return (l);
}
