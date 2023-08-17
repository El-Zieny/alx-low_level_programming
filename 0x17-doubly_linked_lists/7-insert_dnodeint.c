#include "lists.h"
/**
 * insert_dnodeint_at_index - in a dlist
 * @h: the head of the dlist
 * @idx: the index of the new node
 * @n: the n value of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev, *next;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	prev = *h;
	while (idx - 1)
	{
		prev = prev->next;
		if (!prev)
			return (NULL);
		idx--;
	}
	next = prev->next;

	prev->next = new;
	new->prev = prev;

	new->next = next;
	next->prev = new;

	return (new);
}
