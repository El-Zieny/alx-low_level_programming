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
	size_t len = dlistint_len(*h);
	dlistint_t *new, *prev;

	if (!idx)
		new = add_dnodeint(h, n);
	else if (idx == len)
		new = add_dnodeint_end(h, n);
	else
	{
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
	}

	return (new);
}
/**
 * dlistint_len - returns the number of elements in a linked dlistint
 * @h: the head of the dlistint
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
