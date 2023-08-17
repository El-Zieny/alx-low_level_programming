#include "main.h"
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint *h)
{
	int x = 0;
	while (h)
	{
		printf(h->n);
		h = h->next;
		x++;
	}

	return (x);
}
