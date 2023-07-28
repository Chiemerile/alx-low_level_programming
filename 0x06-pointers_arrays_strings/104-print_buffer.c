#include "main.h"
#include <stdio.h>

/**
 * print_buffer - to prnt buffer
 * @b: the buffer
 * @size: the sz
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int p, l, k;

	p = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (p < size)
	{
		l = size - p < 10 ? size - p : 10;
		printf("%08x: ", p);
		for (k = 0; k < 10; k++)
		{
			if (k < l)
				printf("%02x", *(b + p + k));
			else
				printf("  ");
			if (k % 2)
			{
				printf(" ");
			}
		}
		for (k = 0; k < l; k++)
		{
			int c = *(b + p + k);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		p += 10;
	}
}
