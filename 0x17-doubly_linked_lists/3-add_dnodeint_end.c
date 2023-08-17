#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlist
 * @head: of the dlist
 * @n: the element of the new node
 * Return: the adress of the new node or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
