#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint
 * @h: the head of the dlistint
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
