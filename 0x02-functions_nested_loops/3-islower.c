 #include "main.h"
/**
 *_islower - this function checks for lowercase characters
 * @c: represents the character that wd be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
