#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a list node
 * @h: the node struct
 * Return: number of members
 */
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
