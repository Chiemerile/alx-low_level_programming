#include "lists.h"

/**
 * insert_nodeint_at_index - fnx inserts new node at a given position
 * in a linked list
 * @head: pntr to first node within list
 * @idx: index of the list which starts at 0 where the NewNode IsToBe added
 * @n: data which is to be inserted into the new node
 *
 * Return: address of NewNode, else NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *fresh;
	listint_t *brief = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh || !head)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
		return (fresh);
	}

	for (j = 0; brief && j < idx; j++)
	{
		if (j == idx - 1)
		{
			fresh->next = brief->next;
			brief->next = fresh;
			return (fresh);
		}
		else
			brief = brief->next;
	}
	return (NULL);
}
