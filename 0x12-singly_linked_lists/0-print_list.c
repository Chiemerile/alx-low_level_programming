#include <stdio.h>
#include "lists.h"

/**
 * print_list - fnx prints all elems of list_t list
 * @h: pntr to the list_t list to printed
 * Return: num of node
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
