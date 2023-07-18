#include <stdio.h>

/**
 * main - The program will print all single digit nums of base 10
 * starting from 0, an then folowd by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int z;

	for (z = 0; z < 10; z++)
	{
		printf("%d", z);
	}
	putchar('\n');
	return (0);
}
