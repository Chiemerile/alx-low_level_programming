#include "main.h"
/**
 * swap_int - The func switches the values of two different ints
 * @a: First integer switched
 * @b: Second integer switched
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
