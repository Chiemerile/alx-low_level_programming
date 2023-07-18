#include <stdio.h>

/**
 * main - The prog prints all possble difrnt combntions of 2-digits
 * Return: 0 (Success)
 */
int main(void)
{
	int z, y;

	for (z = 48; z <= 56; z++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > z)
			{
				putchar(z);
				putchar(y);

				if (z != 56 || y != 57)
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
