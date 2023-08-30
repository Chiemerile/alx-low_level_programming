#include "lists.h"

/**
 * listint_len - returns the num of elems in linked listint_t lists
 * @h: linked list of type listint_t to be covered
 *
 * Return: tot num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numeral = 0;

	while (h)
	{
		numeral++;
		h = h->next;
	}
	return (numeral);
}
