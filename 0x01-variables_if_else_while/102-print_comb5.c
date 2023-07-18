#include <stdio.h>

/**
 * main - The prog prints all possbl combntions of two 2-dgt nums
 * Return: 0 (Success)
 */

int main(void)
{
	int z, y;

	for (z = 0; z < 100; z++)
	{
		for (y = 0; y < 100; y++)
		{
			if (z < y)
			{
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);

				if (z != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
