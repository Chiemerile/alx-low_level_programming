#include <stdio.h>

/**
 * main - The func prints lowercase alphabets in reverse, folowd by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
