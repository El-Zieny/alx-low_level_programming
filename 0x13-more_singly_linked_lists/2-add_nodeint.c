#include "lists.h"
/**
 * add_nodeint - adds a new node at the begining of the list
 * @head: the head of the list
 * @n: ints n member
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return ('\0');
	new->n = n;
	new->next = *head;
	*head = &new;
	return (new);
}
