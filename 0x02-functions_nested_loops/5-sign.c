#include "main.h"
/**
 * print_sign - this prints out a number sign
 * @n: int to check
 * Return: 1 and prints + if n greater than zero
 * r 0 and prints 0 if n zero
 * r -1 and prints - if n less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
