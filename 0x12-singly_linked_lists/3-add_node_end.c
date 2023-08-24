#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - fnx adds a new node at the end of a list_t list
 * @head: double pntr to list_t
 * @str: str to be inputed into the new node
 * Return: address of new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tempo = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = newnode;

	return (newnode);
}
