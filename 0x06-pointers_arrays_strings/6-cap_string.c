#include "main.h"

/**
 * cap_string - converts all the words of any strng to capital letters.
 * @str: string for capitalizatn.
 *
 * Return: The pointr to thh convrtd strng.
 */

char *cap_string(char *str)
{
	int indsx = 0;

	while (str[indsx])
	{
		while (!(str[indsx] >= 'a' && str[indsx] <= 'z'))
			indsx++;

		if (str[indsx - 1] == ' ' ||
		    str[indsx - 1] == '\t' ||
		    str[indsx - 1] == '\n' ||
		    str[indsx - 1] == ',' ||
		    str[indsx - 1] == ';' ||
		    str[indsx - 1] == '.' ||
		    str[indsx - 1] == '!' ||
		    str[indsx - 1] == '?' ||
		    str[indsx - 1] == '"' ||
		    str[indsx - 1] == '(' ||
		    str[indsx - 1] == ')' ||
		    str[indsx - 1] == '{' ||
		    str[indsx - 1] == '}' ||
		    indsx == 0)
			str[indsx] -= 32;

		indsx++;
	}

	return (str);
}
