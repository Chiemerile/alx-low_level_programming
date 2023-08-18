#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prog prints each array elem on new line
 * @array: array
 * @size: numb of  elems to print
 * @action: pntr to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        unsigned int j;

        if (array == NULL || action == NULL)
                return;

        for (j = 0; j < size; j++)
        {
                action(array[j]);
        }
}
