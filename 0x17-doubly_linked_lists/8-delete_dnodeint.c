#include "lists.h"
/**
 * delete_dnodeint_at_index - yes
 * @head: of the dlist
 * @index: of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);
	dlistint_t *tmp;

	if (index > len || !(*head))
		return (-1);
	tmp = *head;
	if (len == 0 && index == 0)
		*head = NULL;
	else if (!index)
	{
		(*head) = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	else if (len == index)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->prev->next = NULL;
	}
	else
	{
		while (index)
		{
			tmp = tmp->next;
			index--;
		}
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
/**
 * dlistint_len - returns the number of elements in a linked dlistint
 * @h: the head of the dlistint
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
