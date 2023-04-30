#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: the head of the list
 * @n: the n member of the new added node
 * Return: the address of the new added node
 */
listint_t *add_nodein_end(listint_t **head, const int n)
{
	listint_t *new;

	while (head)
		*head = *head->next;
	*head->next = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
