#include "main.h"

/**
 * reverse_array - to rvrs array of ints
 * @a: arry
 * @n: num of elemnts in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int l;
	int v;

	for (l = 0; l < n--; l++)
	{
		v = a[l];
		a[l] = a[n];
		a[n] = v;
	}
}
