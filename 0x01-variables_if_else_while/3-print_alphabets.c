#include <stdio.h>

/**
 * main - The program will print alphabets in lwercase,& then in uppercase,
 * after whuch it will be followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	char zalp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int z;

	for (z = 0; z < 52; z++)
	{
		putchar(zalp[z]);
	}
	putchar('\n');
	return (0);
}
