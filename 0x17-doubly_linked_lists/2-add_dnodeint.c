#include "lists.h"
/**
 * add_dnodeint - adds a new node at the end of dlistint
 * @head: of the list
 * @n: the element of it
 * Return: the adress of the new element or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	if (!(*head))
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
