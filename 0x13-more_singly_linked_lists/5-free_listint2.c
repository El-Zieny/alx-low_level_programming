#include "lists.h"
/**
 * free_listint2 - frees the whole lisnt (head included)
 * @head: the head of the linst
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (*head == '\0' || head == '\0')
		return;
	node = *head;
	while (node != '\0')
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	free(node);
	*head = '\0';
}
