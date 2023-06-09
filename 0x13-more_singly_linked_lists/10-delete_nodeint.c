#include "lists.h"
/**
 * delete_nodeint_at_index - yes
 * @head: the head of the list
 * @index: the node to be deleted
 * Return: 1 if succeeded or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *node;
	unsigned int x;

	if (!*head)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		node = NULL;
		return (1);
	}
	del = *head;
	for (x = 0; x < index; x++)
	{
		if (!del->next)
			return (-1);
		node = del;
		del = del->next;
	}
	node->next = del->next;
	free(del);
	del = NULL;
	return (1);
}
