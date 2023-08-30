#include "lists.h"

/**
 * print_listint - fnx prints all the elems of a linked, listint_t, list
 * @h: linked list of the type 'listint_t' be printed
 *
 * Return: tot num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numeral = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numeral++;
		h = h->next;
	}
	return (numeral);
}
