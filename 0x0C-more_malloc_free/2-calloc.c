#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fnx to fill mem w constant byte
 * @s: mem area to be filled
 * @b: char to be copied
 * @n: numb of times for b to be copied
 * Return: pointer to mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * *_calloc - fnx gives mem for an array w malloc
 * @nmemb: Num of array element
 * @size: individual element size
 * Return: pointer given to mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
