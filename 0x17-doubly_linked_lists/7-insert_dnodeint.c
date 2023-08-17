#include "lists.h"
/**
 * insert_dnodeint_at_index - in a dlist
 * @h: the head of the dlist
 * @idx: the index of the new node
 * @n: the n value of the new node
 * Return: the new added node if success, NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev, *next;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (!idx)
	{
		new->prev = NULL;
		new->next = *h;
	}
	else
	{
		prev = *h;
		while (idx - 1)
		{
			prev = prev->next;
			if (!prev)
				return (NULL);
			idx--;
		}
		if (prev->next)
		{
			next = prev->next;
			new->next = next;
			next->prev = new;
		}
		else
			new->next = NULL;

		prev->next = new;
		new->prev = prev;
	}
	return (new);
}
