#include "lists.h"

/**
 * pop_listint - fnx deletes the head node of a linked listint_t list
 * @head: pntr to the first elem in the linked listint_t list
 *
 * Return: head node’s data (n), otherwise 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *brief;
	int numeral;

	if (!head || !*head)
		return (0);

	numeral = (*head)->n;
	brief = (*head)->next;
	free(*head);
	*head = brief;

	return (numeral);
}
