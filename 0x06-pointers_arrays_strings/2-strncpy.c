#include "main.h"

/**
 * _strncpy - to copy strng
 * @dest: inpt val
 * @src: inpt val
 * @n: inpt val
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}

	return (dest);
}
