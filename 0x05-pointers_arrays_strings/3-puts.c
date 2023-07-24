#include "main.h"
/**
 * _puts - This func prints a str, folowd by a new lne to standardout
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
