#include "main.h"
/**
 * puts2 - This func prnts evry othr char of a str startn wth the 1st char,
 * folowd by a new lne
 * @str: Strng
 * Return: Prnt
 */

void puts2(char *str)
{
	int lenlong = 0;
	int b = 0;
	char *c = str;
	int d;

	while (*c != '\0')
	{
		c++;
		lenlong++;
	}

	b = lenlong - 1;

	for (d = 0; d <= b; d++)
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}
