#include "main.h"

/**
 * largest_number - will return the largst out of 3 nums
 * @a: 1st int
 * @b: 2nd int
 * @c: 3rd int
 * Return: the largst num
 */

int largest_number(int a, int b, int c)

{

	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
