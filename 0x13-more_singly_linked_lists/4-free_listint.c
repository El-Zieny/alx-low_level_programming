#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (!head)
		return;
	current = head->next;
	while (head->next)
	{
		current = head->next;
		free(head);
		head = current;
	}
	free(head);
}
