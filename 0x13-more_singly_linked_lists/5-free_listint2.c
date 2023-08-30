#include "lists.h"

/**
 * free_listint2 - fnx frees a linked listint_t list
 * @head: pntr to the linked listint_t list which is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *brief;

	if (head == NULL)
		return;

	while (*head)
	{
		brief = (*head)->next;
		free(*head);
		*head = brief;
	}
	*head = NULL;
}
