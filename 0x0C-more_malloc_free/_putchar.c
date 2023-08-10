#include "main.h"
#include <unistd.h>
/**
 * _putchar - fnx which creates an array of chars,
 * then initializes it with a specific char
 * @c: char to prin
 * Return: on success 1, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
