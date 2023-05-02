#include "lists.h"
/**
 * sum_listint - summs all the n members of a listint linked list
 * @head: the head of the list
 * Return: the result
 */
int sum_listint(listint_t *head)
{
	int res;

	res = 0;
	if (!head)
		return (0);
	while (head)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
