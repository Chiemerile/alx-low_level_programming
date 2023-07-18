#include <stdio.h>

/**
 * main - The prog prints all possibl combintions of singl_dgt num
 * Return: 0 (Success)
 */

int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);

		if (z != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
