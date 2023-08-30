#include "lists.h"

/**
 * free_listint_safe - fnx frees a listint_t linked list
 * @h: pntr to the 1st node within the listint_t linked list
 *
 * Return: size of the free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *brief;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			brief = (*h)->next;
			free(*h);
			*h = brief;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
