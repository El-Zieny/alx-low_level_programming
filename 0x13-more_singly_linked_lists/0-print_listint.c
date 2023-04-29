#include "lists.h"
#include <stdio.h>
/**
 * print_listint - check the code
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int x;

	if (!h)
		return (-1);
	x = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
