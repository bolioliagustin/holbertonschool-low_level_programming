#include "lists.h"
/**
 * add_dnodeint -  elements of list
 * @head: lista
 * @n: value
 * Return:  new node addrees
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (!head)
{
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head)
{
(*head)->prev = new;
}
*head = new;
return (new);
}
