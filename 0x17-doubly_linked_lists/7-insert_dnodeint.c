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
	dlistint_t *new, *prev;
	/*size_t len = dlistint_len(*h);*/

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
	if (prev->next)
	{
		new->next = prev->next;
		prev->next->prev = new;
	}
	else
		new->next = NULL;
	prev->next = new;
	new->prev = prev;
	return (new);
}
