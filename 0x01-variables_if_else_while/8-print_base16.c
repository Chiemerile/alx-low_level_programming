#include <stdio.h>

/**
 * main - The prog prints all the nums of base 16 in lowercs,
 * and then folowed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	for (z = 97; z < 103; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
