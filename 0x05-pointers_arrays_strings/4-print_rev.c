#include "main.h"
/**
 * print_rev - This func prints a strng in reverse, folowd by a new lne
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int lenlong = 0;
	int b;

	while (*s != '\0')
	{
		lenlong++;
		s++;
	}

	s--;

	for (b = lenlong; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
