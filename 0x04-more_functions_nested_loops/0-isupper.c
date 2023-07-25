#include "main.h"

/**
 * _isupper - This func will write letters in uppercase
 * @c: The char that is to be checked
 * Return: 1 on success, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
