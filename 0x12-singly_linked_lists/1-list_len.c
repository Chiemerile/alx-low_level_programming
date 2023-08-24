#include <stdlib.h>
#include "lists.h"

/**
 * list_len - fnx returns num of elems in linked list_t list
 * @h: pntr to linked list_t list
 * Return: num of elems in pnter h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
