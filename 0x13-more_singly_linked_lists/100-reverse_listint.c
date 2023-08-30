#include "lists.h"

/**
 * reverse_listint - fnx reverses a linked listint_t list
 * @head: pntr to the 1st node within the linked listint_t list
 *
 * Return: pntr to the 1st node within the newly reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
