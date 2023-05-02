#include "lists.h"
/**
 * get_nodeint_at_index - get the index-ed node and returns its n member
 * @head: the head of the list
 * @index: the index of the desired node
 * Return: th n member of the desired node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (!head)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (current);
}
