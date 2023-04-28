#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints a list node
 * @h: the node struct
 * Return: number of members
 */
size_t print_list(const list_t *h)
{
	unsigned int x, i, c;

	x = 0, c = 0;
	if (!(h->str))
		printf("[0] (nil)\n"), x++, c++;
	else
		printf("[%u] %s\n", h->len, h->str), x++;
	if (h->next)
	{
		i = x;
		print_list(h->next), i++;
	}
	return (i);
}
