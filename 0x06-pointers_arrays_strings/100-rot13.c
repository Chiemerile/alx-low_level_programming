#include "main.h"
#include <stdio.h>

/**
 * rot13 - code convertr rot13
 * @s: the pointr to the strng parametss
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int k;
	int l;
	char facts1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char factsrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (s[k] == facts1[l])
			{
				s[k] = factsrot[l];
				break;
			}
		}
	}

	return (s);
}
