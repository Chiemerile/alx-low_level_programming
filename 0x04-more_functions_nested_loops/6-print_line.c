#include "main.h"

/**
 * print_line - This func will draw a strght lne
 * @n: num of times the char "_" shld be prntd
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b;

		for (b = 1; b <= n; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
