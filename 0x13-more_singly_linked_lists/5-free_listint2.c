#include "lists.h"
/**
 * free_listint2 - frees the whole lisnt (head included)
 * @head: the head of the linst
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (!*head || !head)
		return;
	node = *head;
	*head = '\0';
	while (node)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
}
