#include "lists.h"
/**
 * insert_nodeint_at_index - yes
 * @head: the head of the list
 * @idx: the index of the new inserted node
 * @n: the value of n member of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new, *tmp;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *head;
	for (x = 0; x < idx - 1; x++)
	{
		if (!tmp->next && x == idx - 2)
		{
			tmp = tmp->next;
			break;
		}
		if (!tmp->next)
			return (NULL);
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
