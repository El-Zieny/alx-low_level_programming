#include "lists.h"
/** listint_len - counts the elements of a node
 * @h: the hed of the linked list
 * Return: the result
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	if (!h)
		return (-1);
	x = 0;
	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
