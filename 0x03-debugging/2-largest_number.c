#include "main.h"

/**
 * largest_number - returns largest out of 3 num
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
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
