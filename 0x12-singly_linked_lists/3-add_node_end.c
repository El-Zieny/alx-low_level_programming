#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of the list
 * @head: a pointer
 * @str: string for str member
 * Return: address for last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return ('\0');
	*head = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = '\0';
	return (new);
}
