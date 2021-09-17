#include "lists.h"
/**
 * add_dnodeint_end - add node the end 
 * @head: lists
 * @n: int
 * Return:  address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *Node, *r = *head;

if (!head)
{
return (NULL);
}

Node = malloc(sizeof(dlistint_t));

if (!Node)
{
return (NULL);
}

Node->n = n;
Node->next = NULL;

if (*head == NULL)
{
Node->prev = NULL;
*head = Node;
return (Node);
}

while (r->next)
{
r = r->next;
}
r->next = Node;
Node->prev = r;
Node->next = NULL;
return (Node);
}
