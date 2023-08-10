#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - Fnx gives mem w malloc
 * @b: bytes to be given
 * Return: pointer to given mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
