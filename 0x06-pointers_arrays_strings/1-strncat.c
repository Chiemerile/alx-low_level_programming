#include "main.h"

/**
 * _strncat - concats 2 strngs, usng at most n bytes frm src
 * @dest: inpt val
 * @src: inpt val
 * @n: inpt val
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int l;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}

	l = 0;
	while (l < n && src[l] != '\0')
	{
	dest[k] = src[l];
	k++;
	l++;
	}

	dest[k] = '\0';

	return (dest);
}
