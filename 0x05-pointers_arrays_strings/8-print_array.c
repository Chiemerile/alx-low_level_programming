#include "main.h"

/**
 * print_array - This func prnts n elements of an ArrayOfInts folowd by new lne
 * @a: The ArrayName
 * @n: The NumOfElemnts of the array that will be printd
 * Return: Inputs a & n
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}

	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}
