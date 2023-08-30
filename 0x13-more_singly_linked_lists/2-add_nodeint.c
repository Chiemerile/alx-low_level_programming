#include "lists.h"

/**
 * add_nodeint - fnx adds a new node at the beginning of a listint_t list
 * @head: pntr whch points tofirst node inside the list
 * @n: data to be inserted into fresh node
 *
 * Return: address of the new elem, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
