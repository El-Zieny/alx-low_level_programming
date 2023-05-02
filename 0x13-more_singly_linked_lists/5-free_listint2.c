#include "lists.h"
/**
 * free_listint2 - frees the whole lisnt (head included)
 * @head: the head of the linst
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (*head == NULL || head == NULL)
		return;
	node = *head;
	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	*head = NULL;
}
