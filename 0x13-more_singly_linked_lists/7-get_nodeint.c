#include "lists.h"
/**
 * get_nodeint_at_index - get the index-ed node and returns its n member
 * @head: the head of the list
 * @index: the index of the desired node
 * Return: th n member of the desired node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int x;

	if (!head)
		return (NULL);
	current = head;
	for (x = 0; x < index; x++)
		current = current->next;
	if (!current)
		return (NULL);
	return (current);
		
}
