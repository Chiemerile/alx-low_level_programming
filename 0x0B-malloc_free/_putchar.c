#include "main.h"
#include <unistd.h>
/**
 * _putchar - fnx which creates array of chars,
 * @c: character be printed
 * Return: On success 1, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
