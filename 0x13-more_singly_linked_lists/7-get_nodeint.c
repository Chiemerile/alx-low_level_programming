#include "lists.h"

/**
 * get_nodeint_at_index - fnx returns the nth node of listint_t linkd list
 * @head: first node in the listint_t linked list
 * @index: index of the node, starting at 0
 *
 * Return: pntr to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *brief = head;

	while (brief && j < index)
	{
		brief = brief->next;
		j++;
	}

	return (brief ? brief : NULL);
}
