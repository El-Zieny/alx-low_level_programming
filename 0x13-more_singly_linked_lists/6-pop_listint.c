#include "lists.h"
/**
 * pop_listint - deletes the head of a listint list
 * @head: the head of the ment list
 * Return: the n member of node head or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int x;

	x = head->n;
	free(head);
	*head = *head->next;
	return (x);
}
