#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adds a new nod at the start of the list
 * @head: a pointer
 * @str: str to be duplicated into the new added node
 * Return: address of new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return ('\0');
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
