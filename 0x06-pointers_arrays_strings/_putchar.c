#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function will write char c to standardout
 * @c: The char to be printd
 * Return: 1 (success), -1 (error) and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
