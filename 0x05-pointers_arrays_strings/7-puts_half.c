#include "main.h"
/**
 * puts_half - This func prnts half of a str
 * If the len is an odd num, prnt  n = (length_of_the_string - 1) / 2
 * @str: Inputted
 * Return: Half of the inputted
 */

void puts_half(char *str)
{
	int b, n, lenlong;

	lenlong = 0;

	for (b = 0; str[b] != '\0'; b++)
		lenlong++;

	n = (lenlong / 2);

	if ((lenlong % 2) == 1)
		n = ((lenlong + 1) / 2);

	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);

	_putchar('\n');
}
