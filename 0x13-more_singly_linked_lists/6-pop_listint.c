#include "lists.h"
/**
 * pop_listint - deletes the head of a listint list
 * @head: the head of the ment list
 * Return: the n member of node head or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int x;

	if (!head || !*head)
		return (0);
	x = (*head)->n;
	*head = (*head)->next;
	return (x);
}
