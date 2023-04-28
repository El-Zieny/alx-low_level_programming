#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the list length (the number of it's nodes)
 * @h: the head node
 * Return: length
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
