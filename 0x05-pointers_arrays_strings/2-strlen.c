#include "main.h"
/**
 * _strlen - This func returns str length
 * @s: String
 * Return: Length
 */

int _strlen(char *s)
{
	int lenlong = 0;

	while (*s != '\0')
	{
		lenlong++;
		s++;
	}
	return (lenlong);
}
