#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: of the dlistint
 * @index: of the node to get
 * Return: the node at the given index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	current = head;
	while (index)
	{
		current = current->next;
		if (!current)
			return (NULL);
		index--;
	}

	return (current);
}
