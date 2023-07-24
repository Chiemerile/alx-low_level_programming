#include "main.h"

/**
 * _atoi - This func will chanhe a str to an int
 * @s: Str to be changd to an int
 * Return: The int changd from the str
 */
int _atoi(char *s)
{
	int k, f, n, len, h, dgt;

	k = 0;
	f = 0;
	n = 0;
	len = 0;
	h = 0;
	dgt = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && h == 0)
	{
		if (s[k] == '-')
			++f;

		if (s[k] >= '0' && s[k] <= '9')
		{
			dgt = s[k] - '0';
			if (f % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			h = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			h = 0;
		}
		k++;
	}

	if (h == 0)
		return (0);

	return (n);
}
