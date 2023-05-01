#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *tmp;

	if(!head)
		return;
	current = head->next;
	while (current->next)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	free(current);
	free(head);
}
