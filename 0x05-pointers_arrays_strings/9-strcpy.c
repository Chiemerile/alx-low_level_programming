#include "main.h"

/**
 * *_strcpy - This func copies the strng that is pointed to by src includn the
 * ending/terminatn null byte (\0) to the buffer that is pointd to by the dest
 * @dest: cpy to here
 * @src: cpy from here
 * Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; k < j ; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
