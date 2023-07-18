#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - The program will print all alphabets except q and e in lwercase,
 * after which it is followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int z;

	for (z = 97; z < 123; z++)
	{
		if (z != 101 && z != 113)
		{
			putchar(z);
		}
	}
	putchar('\n');
	return (0);
}
