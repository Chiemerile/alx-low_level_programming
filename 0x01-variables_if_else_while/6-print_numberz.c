#include <stdio.h>

/**
 * main - The program is to print all single digit numbers of base 10
 * starting from 0, then folowd by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
