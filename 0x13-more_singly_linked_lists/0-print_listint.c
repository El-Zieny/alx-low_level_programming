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

	printf("%d\n", h->n), x = 1;
	for (; h->next;)
	{
		h = h->next;
		print_listint(h);
		x++;
	}
	return (x);
}
