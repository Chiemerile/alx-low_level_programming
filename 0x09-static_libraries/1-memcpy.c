#include "main.h"
/**
 *_memcpy - fnx that copies memory area
 *@dest: memory stored
 *@src: memory copied
 *@n: numb of bytes
 *Return: copied memory when n byted changes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
