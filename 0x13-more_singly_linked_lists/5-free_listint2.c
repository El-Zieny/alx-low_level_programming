#include "lists.h"
/**
 * free_listint2 - frees the whole lisnt (head included)
 * @head: the head of the linst
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (*head == NULL || head == NULL)
		return;
	while (node != NULL)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}
