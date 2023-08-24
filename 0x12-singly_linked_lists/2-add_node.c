#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - fnx adds new node at the start of list_t list
 * @head: double pntr to list_t
 * @str: new str that is to added into the node
 * Return: address of the new elem, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
