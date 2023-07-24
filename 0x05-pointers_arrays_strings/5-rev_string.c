#include "main.h"
/**
 * rev_string - This func reverses a strng
 * @s: string
 * Return: Reversd strng
 */

void rev_string(char *s)
{
	char frev = s[0];
	int fcountr = 0;
	int b;

	while (s[fcountr] != '\0')
	fcountr++;

	for (b = 0; b < fcountr; b++)
	{
		fcountr--;
		frev = s[b];
		s[b] = s[fcountr];
		s[fcountr] = frev;
	}
}
