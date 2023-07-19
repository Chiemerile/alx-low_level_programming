#include "main.h"
/**
 * _isalpha - tfunction looks for alphabetic character
 * @c: character that is looked fr
 * Return: 1 if c is a char, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
