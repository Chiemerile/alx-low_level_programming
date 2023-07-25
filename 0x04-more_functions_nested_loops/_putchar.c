#include "main.h"
#include <unistd.h>

/**
 * _putchar - This func will write the char c to standardout
 * @c: The char that is to be printd
 * Return: 1 (Success), else -1 (Error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
