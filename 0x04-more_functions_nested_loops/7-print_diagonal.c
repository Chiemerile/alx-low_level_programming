#include "main.h"

/**
 * print_diagonal - Func will draw a diagonl lne
 * @n: The num of times the char \ would print
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == b)
					_putchar('\\');
				else if (c < b)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
