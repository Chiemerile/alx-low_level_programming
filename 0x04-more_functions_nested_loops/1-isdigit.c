#include "main.h"

/**
 * _isdigit - This func will run checks for dgts 0 to 9
 * @c: The nums that are to be checked
 * Return: 1 on success, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
