#include "main.h"
/**
 * print_alphabet_x10 - this prints out 10 times the alphabet, in lowercase and then a new line.
 */

void print_alphabet_x10(void)
{
	char ch;
	int b;
	b = 0;
	while (b < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		b++;
	}
}
