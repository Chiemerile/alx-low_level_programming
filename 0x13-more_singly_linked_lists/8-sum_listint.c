#include "lists.h"

/**
 * sum_listint - fnx returns sum of all the data (n) of listint_t linked list
 * @head: first node within the listint_t linked list
 *
 * Return: Tot sum
 */
int sum_listint(listint_t *head)
{
	int tsum = 0;
	listint_t *brief = head;

	while (brief)
	{
		tsum += brief->n;
		brief = brief->next;
	}
	return (tsum);
}
