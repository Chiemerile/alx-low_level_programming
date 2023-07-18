#include <stdio.h>

/**
 * main - The program will print alphabets in lowercase,
 * after whiich it is followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char zalp[26] = "abcdefghijklmnopqrstuvwxyz";
	int z;

	for (z = 0; z < 26; z++)
	{
		putchar(zalp[z]);
	}
	putchar('\n');
	return (0);
}
