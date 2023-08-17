#include "lists.h"
/**
 * sum_dlistint - sums all the n's of a dlist
 * @head: of the dlist
 * Return: the su result
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
