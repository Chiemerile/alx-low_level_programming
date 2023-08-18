#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prog that prints name using pointer to fnx
 * @name: str to added
 * @f: pntr to fnx
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
        if (name == NULL || f == NULL)
                return;

        f(name);
}
