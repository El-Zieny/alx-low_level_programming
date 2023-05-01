#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: the head of the list
 * @n: the n member of the new added node
 * Return: the address of the new added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (!new)
		return ('\0');
	new->n = n;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	return (new);
}
