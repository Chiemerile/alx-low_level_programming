#include "main.h"

/**
 * print_square - Func will draw a square
 * @size: Square size
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 0; b < size; b++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
