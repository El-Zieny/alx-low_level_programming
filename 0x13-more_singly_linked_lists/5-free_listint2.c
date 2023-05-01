#include "lists.h"
/**
 * free_listint2 - frees the whole lisnt (head included)
 * @head: the head of the linst
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	node = head->next;
	head->next = NULL;
	while (head->next)
	{
		node = head->next;
		free(head);
		*head = node;
	}
	free(head);
}
