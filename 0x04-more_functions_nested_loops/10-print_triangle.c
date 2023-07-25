#include "main.h"

/**
 * print_triangle - Will draw triangle
 * @size: Triangle size
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, c;

		for (b = 1; b <= size; b++)
		{
			for (c = b; c < size; c++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= b; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
